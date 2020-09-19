// UVA 10282 Babelfish

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    string line;

    bool flag = false;
    map<string, string> dict;
    while (getline(cin, line))
    {
        if (line == "")
        {
            flag = true;
            continue;
        }

        if (flag)
        {
            string result = dict[line];
            if (result != "")
                cout << result << endl;
            else cout << "eh" << endl;
        }
        else
        {
            size_t idx = 0;

            while (line[idx] != ' ')
            {
                idx ++;
            }

            dict[line.substr(idx+1, line.size())] = line.substr(0, idx);
        }
    }

    return 0;
}
