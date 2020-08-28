// UVa 13145 Wuymul Wixcha

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int shift;
    string line;

    while(cin >> shift && shift)
    {
        getline(cin, line);
        getline(cin, line);

        for (size_t i=0; i<line.size(); i++)
        {
            if (line[i]>='A' && line[i]<='Z')
            {
                int pos = (int)(line[i]-'A')+(shift%26);
                pos = pos%26;
                if (pos < 0) pos+=26;
                cout << (char)(pos+'A');
            }
            else if (line[i]>='a' && line[i]<='z')
            {
                int pos = (int)(line[i]-'a')+(shift%26);
                pos = pos%26;
                if (pos < 0) pos+=26;
                cout << (char)(pos+'a');
            }
            else cout << line[i];
        }
        cout << endl;
    }

    return 0;
}
