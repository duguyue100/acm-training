// UVa 632 Compression (II)

#include <bits/stdc++.h>

using namespace std;

string permute(string line)
{
    string result = line.substr(1, line.size()-1);
    result += line[0];
    return result;
}


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        int N; cin >> N;
        string line = "";
        string sub_line;
        getline(cin, sub_line);
        while (getline(cin, sub_line) && sub_line != "")
        {
            line += sub_line;
        }

        if (line != "")
        {
            string o_line = permute(line);

            vector<string> ss;
            ss.push_back(line);

            for (int i=1; i<N; i++)
            {
                line = permute(line);
                ss.push_back(line);
            }

            sort(ss.begin(), ss.end());

            string result = "";
            for (size_t i=0; i<ss.size(); i++)
            {
                result += ss[i][N-1];
            }

            std::pair<std::vector<string>::iterator,std::vector<string>::iterator> bounds = equal_range(ss.begin(), ss.end(), o_line);

            int idx = (int)(bounds.first-ss.begin());

            if (idx == 0) idx = 1;

            cout << idx << endl;
            while (result.size() > 50)
            {
                cout << result.substr(0, 50) << endl;
                result = result.substr(50, result.size());
            }
            if (result != "")
                cout << result << endl;

        }
        else
        {
            cout << 1 << endl << endl;
        }

        if (t != T) cout << endl;
    }


    return 0;
}
