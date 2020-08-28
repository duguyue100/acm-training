// UVa 10896 Known Plaintext Attack

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N; cin >> N;
    string line;
    getline(cin, line);

    for (int n=1; n<=N; n++)
    {
        getline(cin, line);
        vector<string> words;
        istringstream iss(line);
        for (string s; iss >> s; ) words.push_back(s);
        getline(cin, line);
        string result = "";
        for (int i=0; i<words.size(); i++)
        {
            if (words[i].size() == line.size())
            {
                int diff = (int)words[i][0] - (int)line[0];
                if (diff < 0) diff += 26;
                bool flag = true;
                for (int k=1; k<line.size(); k++)
                {
                    int temp_diff = (int)words[i][k]-(int)line[k];
                    if (temp_diff < 0) temp_diff += 26;
                    if (diff != temp_diff)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag) result += (char)('a'+diff);
            }
        }
        sort(result.begin(), result.end());
        cout << result << endl;
    }

    return 0;
}
