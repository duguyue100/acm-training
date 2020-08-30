// UVa 1339 Ancient Cipher

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string coded, text;

    while (cin >> coded >> text)
    {
        vector<int> c;
        vector<int> t;
        for (int i=0; i<26; i++)
        {
            c.push_back(0);
            t.push_back(0);
        }

        for (size_t i=0; i<coded.size(); i++)
        {
            c[coded[i]-'A'] ++;
            t[text[i]-'A'] ++;
        }

        sort(c.begin(), c.end());
        sort(t.begin(), t.end());

        bool flag = true;
        for (int i=0; i<26; i++)
        {
            if (c[i] != t[i])
            {
                flag = false;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
