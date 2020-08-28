// UVa 11716 Digital Fortress

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N; cin >> N;

    string line;

    getline(cin, line);

    while(getline(cin, line))
    {
        size_t n = (size_t)sqrt((double)line.size());
        
        if (n*n != line.size())
        {
            cout << "INVALID" << endl;
            continue;
        }

        vector<string> code;

        for (size_t i=0; i<n; i++)
        {
            code.push_back(line.substr(i*n, n));
        }

        for (size_t i=0; i<n; i++)
        {
            for (size_t j=0; j<n; j++)
            {
                cout << code[j][i];
            }
        }
        cout << endl;
    }

    return 0;
}
