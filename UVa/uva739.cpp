// UVa 739 Soundex Indexing

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string name;

    map<char, int> a;

    a['B'] = 1;
    a['P'] = 1;
    a['F'] = 1;
    a['V'] = 1;
    a['C'] = 2;
    a['S'] = 2;
    a['K'] = 2;
    a['G'] = 2;
    a['J'] = 2;
    a['Q'] = 2;
    a['X'] = 2;
    a['Z'] = 2;
    a['D'] = 3;
    a['T'] = 3;
    a['L'] = 4;
    a['M'] = 5;
    a['N'] = 5;
    a['R'] = 6;

    a['A'] = 0;
    a['E'] = 0;
    a['I'] = 0;
    a['O'] = 0;
    a['U'] = 0;
    a['Y'] = 0;
    a['W'] = 0;
    a['H'] = 0;


    cout << setw(13) << "NAME" << setw(33-name.size()) << "SOUNDEX CODE" << endl;
    while (cin >> name)
    {
        string result = ""; result += name[0];

        for (size_t i=1; i<name.size(); i++)
        {
            if (result.size() == 4) break;

            if (a[name[i]] == 0)
            {
                // skip
            }
            else
            {
                if (a[name[i]] == a[name[i-1]])
                {
                    // skip
                }
                else
                {
                    result += (char)(a[name[i]]+'0');
                }
            }
        }

        if (result.size() < 4)
        {
            while (result.size() < 4)
            {
                result += "0";
            }
        }

        cout << setw(10+name.size()-1) << name << setw(25-name.size()+result.size()) << result << endl;
    }

    cout << setw(32) << "END OF OUTPUT" << endl;

    return 0;
}
