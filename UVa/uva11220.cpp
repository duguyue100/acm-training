// UVa 11220 Decoding the message

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
        cout << "Case #" << t << ":" << endl;

        while (getline(cin, line))
        {
            if (line == "") break;

            int k = 0;
            while (line != "")
            {
                size_t s_pos = line.find(" ");
                string token = line.substr(0, s_pos);
                line = line.substr(s_pos+1, line.size());

                if (k < token.size())
                {
                    cout << token[k];
                    k++;
                }

                if (s_pos == string::npos) break;
            }
            cout << endl;

        }

        if (t < T)
            cout << endl;
    }

    return 0;
}
