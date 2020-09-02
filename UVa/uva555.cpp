// UVa 555 Bridge Hands

#include<bits/stdc++.h>

using namespace std;

void printset(char p, vector<int> cards)
{
    cout << p << ":";

    for (size_t i=0; i<cards.size(); i++)
    {
        int s = cards[i]/13;
        int n = cards[i]%13;
        cout << " ";
        switch (s)
        {
            case 0: cout << 'C'; break;
            case 1: cout << 'D'; break;
            case 2: cout << 'S'; break;
            case 3: cout << 'H'; break;
        }

        if (n<8)
            cout << n+2;
        else
        {
            switch (n)
            {
                case 8: cout << 'T'; break;
                case 9: cout << 'J'; break;
                case 10: cout << 'Q'; break;
                case 11: cout << 'K'; break;
                case 12: cout << 'A'; break;
            }
        }
    }
    cout << endl;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    char dealer;
    
    while (cin >> dealer && dealer != '#')
    {
        string line, line2;

        cin >> line >> line2;
        
        line += line2;

        vector<vector<int > > deck;
        for (int i=0; i<4; i++) deck.push_back(vector<int>());

        int idx = 0;
        for (size_t i=0; i<52; i++)
        {
            // map card to number
            char s = line[i*2];
            char n = line[i*2+1];

            int s_i = 0, n_i = 0;

            switch (s)
            {
                case 'C': s_i = 0; break;
                case 'D': s_i = 1; break;
                case 'S': s_i = 2; break;
                case 'H': s_i = 3; break;
            }

            if (n >= '2' && n <= '9')
            {
                n_i = (n-'0')-2;
            }
            else
            {
                switch (n)
                {
                    case 'T': n_i = 8; break;
                    case 'J': n_i = 9; break;
                    case 'Q': n_i = 10; break;
                    case 'K': n_i = 11; break;
                    case 'A': n_i = 12; break;
                }
            }

            deck[idx].push_back(s_i*13+n_i);
            
            // update idx
            idx += 1;
            idx = idx%4;
        }


        for (int i=0; i<4; i++) 
            sort(deck[i].begin(), deck[i].end());

        // print
        
        if (dealer == 'N')
        {
            printset('S', deck[1]);
            printset('W', deck[2]);
            printset('N', deck[3]);
            printset('E', deck[0]);
        }
        else if (dealer == 'E')
        {
            printset('S', deck[0]);
            printset('W', deck[1]);
            printset('N', deck[2]);
            printset('E', deck[3]);
        }
        else if (dealer == 'S')
        {
            printset('S', deck[3]);
            printset('W', deck[0]);
            printset('N', deck[1]);
            printset('E', deck[2]);
        }
        else if (dealer == 'W')
        {
            printset('S', deck[2]);
            printset('W', deck[3]);
            printset('N', deck[0]);
            printset('E', deck[1]);
        }
    }

    return 0;
}
