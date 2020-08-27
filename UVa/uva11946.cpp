// UVa 11946 Code Number

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    map<char, char> a;

    a[' '] = ' ';
    a['0'] = 'O';
    a['1'] = 'I';
    a['2'] = 'Z';
    a['3'] = 'E';
    a['4'] = 'A';
    a['5'] = 'S';
    a['6'] = 'G';
    a['7'] = 'T';
    a['8'] = 'B';
    a['9'] = 'P';

    int T;
    cin >> T;
    string line;
    
    int t = 1;
    getline(cin, line);
    while (getline(cin, line))
    {
        if (line == "" && t < T)
        {
            t++;
            cout << endl;
        }
        for (int i=0; i<line.size(); i++)
        {
            if (line[i] >= '0' && line[i] <= '9')
                cout << a[line[i]];
            else
                cout << line[i];
        }

        if (line.size() != 0)
            cout << endl;
    }

    return 0;
}
