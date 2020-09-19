// UVA 902 Password Search

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    int N;
    string line;

    while (cin >> N >> line)
    {
        map<string, int> m;

        for (size_t i=0; i<line.size()-N+1; i++)
        {
            m[line.substr(i, N)]++;
        }

        string max_str;
        int max_num = 0;
        for (map<string, int>::iterator it=m.begin(); it!=m.end(); it++)
        {
            if (it->second > max_num)
            {
                max_num = it->second;
                max_str = it->first;
            }
        }

        cout << max_str << endl;
    }

    return 0;
}
