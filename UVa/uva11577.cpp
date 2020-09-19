// UVA 11577 Letter Frequency

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    int T; cin >> T;

    string line;
    getline(cin, line);

    while (getline(cin, line))
    {
        int a[26] = {0};

        for (size_t i=0; i<line.size(); i++)
        {
            if (line[i] >= 'a' && line[i] <= 'z')
            {
                a[line[i]-'a'] ++;
            }
            else if (line[i] >= 'A' && line[i] <= 'Z')
            {
                a[line[i]-'A'] ++;
            }
        }

        int max_val = 0;
        for (int i=0; i<26; i++)
        {
            if (a[i] > max_val)
            {
                max_val = a[i];
            }
        }

        for (int i=0; i<26; i++)
        {
            if (a[i] == max_val)
            {
                cout << (char)(i+'a');
            }
        }

        cout << endl;
    }

    return 0;
}
