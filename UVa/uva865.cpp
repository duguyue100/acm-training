// UVa 865 Substitution Cypher

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;
    string line;

    getline(cin, line);
    getline(cin, line);

    for (int t=1; t<=T; t++)
    {
        string plain;
        string subst;

        getline(cin, plain);
        getline(cin, subst);

        cout << subst << endl << plain << endl;

        map<char, char> book;
        for (size_t i=0; i<plain.size(); i++)
        { 
            book[plain[i]] = subst[i];
        }

        while (getline(cin, line))
        {
            if (line == "") break;

            for (size_t i = 0; i<line.size(); i++)
            {
                if (book.find(line[i]) != book.end())
                    cout << book[line[i]];
                else
                    cout << line[i];
            }
            cout << endl;
        }
        if (t!=T)
            cout << endl;
    }

    return 0;
}
