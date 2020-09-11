// UVa 11787 Numeral Hieroglyphs

#include <bits/stdc++.h>

using namespace std;

bool ordered(string line)
{
    string new_l = "";
    for (size_t i=0; i<line.size(); i++)
    {
        char new_c;

        switch(line[i])
        {
            case 'B': new_c = '1'; break;
            case 'U': new_c = '2'; break;
            case 'S': new_c = '3'; break;
            case 'P': new_c = '4'; break;
            case 'F': new_c = '5'; break;
            case 'T': new_c = '6'; break;
            case 'M': new_c = '7'; break;
        }

        new_l += new_c;
    }

    // going up
    bool flag_u = true;
    for (size_t i=0; i<new_l.size()-1; i++)
    {
        if (new_l[i+1]-new_l[i] < 0)
        {
            flag_u = false;
            break;
        }
    }

    // going down
    bool flag_d = true;
    for (size_t i=0; i<new_l.size()-1; i++)
    {
        if (new_l[i+1]-new_l[i] > 0)
        {
            flag_d = false;
            break;
        }
    }

    return (flag_u | flag_d);
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    map<char, int> m;
    m['B'] = 1; m['U'] = 10; m['S'] = 100; m['P'] = 1000;
    m['F'] = 10000; m['T'] = 100000; m['M'] = 1000000;

    for (int t=1; t<=T; t++)
    {
        string line; cin >> line;

        if (ordered(line))
        {
            map<char, int> a;
            a['B'] = 0; a['U'] = 0; a['S'] = 0; a['P'] = 0;
            a['F'] = 0; a['T'] = 0; a['M'] = 0;
            for (size_t i=0; i<line.size(); i++)
            {
                a[line[i]] ++;
            }

            int flag = true;
            for (map<char, int>::iterator it=a.begin(); it!=a.end(); it++)
            {
                if (it->second > 9)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                int sum = 0;
                for (map<char, int>::iterator it=a.begin(); it!=a.end(); it++)
                {
                    sum += it->second * m[it->first];
                }
                cout << sum << endl;
            }
            else
            {
                cout << "error" << endl;
            }

        }
        else
        {
            cout << "error" << endl;
        }
    }

    return 0;
}
