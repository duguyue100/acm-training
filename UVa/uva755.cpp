// UVa 755 487-3279

#include <bits/stdc++.h>

using namespace std;

string format(string line, map<char, int> code)
{
    string new_line = "";

    for (size_t i=0; i<line.size(); i++)
    {
        if (line[i] >= '0' && line[i] <= '9')
        {
            new_line += line[i];
        }
        if (line[i] >= 'A' && line[i] <= 'Z')
        {
            new_line += (char)(code[line[i]]+'0');
        }
    }

    new_line.insert((size_t)3, "-");
    return new_line;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    map<char, int> code;

    code['A'] = 2; code['B'] = 2; code['C'] = 2;
    code['D'] = 3; code['E'] = 3; code['F'] = 3;
    code['G'] = 4; code['H'] = 4; code['I'] = 4;
    code['J'] = 5; code['K'] = 5; code['L'] = 5;
    code['M'] = 6; code['N'] = 6; code['O'] = 6;
    code['P'] = 7; code['R'] = 7; code['S'] = 7;
    code['T'] = 8; code['U'] = 8; code['V'] = 8;
    code['W'] = 9; code['X'] = 9; code['Y'] = 9;

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        int N; cin >> N;
        
        map<string, int> dict;
        bool flag = true;
        for (int i=0; i<N; i++)
        {
            string line; cin >> line;
            line = format(line, code);

            if (dict.find(line) == dict.end())
            {
                dict[line] = 1;
            }
            else
            {
                flag = false;
                dict[line] ++;
            }
        }

        if (flag == true) cout << "No duplicates." << endl;
        else
        {
            for (map<string, int>::iterator it=dict.begin(); it!=dict.end(); it++)
            {
                if (it->second > 1)
                    cout << it->first << " " << it->second << endl;
            }
        }

        if (t != T)
        {
            cout << endl;
        }
    }

    return 0;
}
