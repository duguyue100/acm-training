// UVa 462 Bridge Hand Evaluator

#include<bits/stdc++.h>

using namespace std;

int rule1(string card)
{
    if (card[0] == 'A') return 4;
    
    if (card[0] == 'K') return 3;
    
    if (card[0] == 'Q') return 2;

    if (card[0] == 'J') return 1;

    return 0;
}

void count(string card, int & s, int & h, int & d, int & c)
{
    if (card[1] == 'S')
        s++;
    else if (card[1] == 'H')
        h++;
    else if (card[1] == 'D')
        d++;
    else if (card[1] == 'C')
        c++;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string a[13];

    while (cin >> a[0])
    {
        int s=0, h=0, d=0, c=0;

        count(a[0], s, h, d, c);
        int sum = rule1(a[0]);
        for (int i=1; i<13; i++)
        {
            cin >> a[i];
            sum += rule1(a[i]);
            count(a[i], s, h, d, c);
        }

        map<char, int> b;
        b['S'] = s;
        b['H'] = h;
        b['D'] = d;
        b['C'] = c;

        // rule 2 - 4
        for (int i=0; i<13; i++)
        {
            if (a[i][0] == 'K')
            {
                if (b[a[i][1]] == 1)
                    sum --;
            }
            else if (a[i][0] == 'Q')
            {
                if (b[a[i][1]] <= 2)
                    sum --;
            }
            else if (a[i][0] == 'J')
            {
                if (b[a[i][1]] <= 3)
                    sum --;
            }
        }
        
        int may_trump = sum;

        // cout << may_trump << endl;
        // rule 5-7
        for (map<char,int>::iterator it=b.begin(); it!=b.end(); ++it)
        {
            if (it->second == 2)
                sum ++;
            else if (it->second <= 1)
                sum += 2;
        }

        map<char, int> b_b = b;

        for (int i=0; i<13; i++)
        {
            if (!b.empty())
            {
                if (a[i][0] == 'A')
                    b.erase(a[i][1]);
                else
                {
                    if (b.find(a[i][1]) != b.end())
                    {
                        if (a[i][0] == 'K' && b[a[i][1]] >= 2)
                            b.erase(a[i][1]);
                        else if (a[i][0] == 'Q' && b[a[i][1]] >= 3)
                            b.erase(a[i][1]);
                    }
                }
            }
        }

        // for (map<char,int>::iterator it=b.begin(); it!=b.end(); ++it)
        // {
        //     cout << it->first << "->" << it->second << endl;
        // }

        if (sum < 14)
        {
            cout << "PASS" << endl;
        }
        else
        {
            if (may_trump >= 16 && b.empty())
            {
                cout << "BID NO-TRUMP" << endl;
            }
            else
            {
                map<char, int>::iterator max_it;
                char max_s;
                int max_card=0;
                for (map<char,int>::iterator it=b_b.begin(); it!=b_b.end(); ++it)
                {
                    if (it->second >= max_card)
                    {
                        max_card = it->second;
                        max_s = it->first;
                    }
                }
                
                cout << "BID " << max_s << endl;
                
            }
        }

    }

    return 0;
}
