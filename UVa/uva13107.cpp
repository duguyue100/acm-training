// UVa 13107 Royale With Cheese

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    while(getline(cin, line))
    {
        map<char, int> book;
        int idx = 1;
        for (size_t i=0; i<line.size(); i++)
        {
            if (book.find(line[i]) == book.end())
            {
                book[line[i]] = idx;
                idx ++;
            }
        }

        string result="";
        for (size_t i=0; i<line.size(); i++)
        {
            int n = book[line[i]];
            result += to_string(n);

        }

        for (size_t i=0; i<result.size(); i++)
        {
            
            switch (result[i]) {
                case '2': cout << 5; break;
                case '5': cout << 2; break;
                case '6': cout << 9; break;
                case '9': cout << 6; break;
                default: cout << result[i];
            }
        }
        cout << endl;
    }

    return 0;
}
