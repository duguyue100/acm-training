// UVa 10670 Work Reduction

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << endl;

        int N, M, L; cin >> N >> M >> L;

        set<pair<int, string>> m;
        string line;
        getline(cin, line);
        for (int i=0; i<L; i++)
        {
            getline(cin, line);
            size_t idx = 0;

            while (line[idx] != ':')
            {
                idx ++;
            }

            string name = line.substr(0, idx);

            size_t start_idx = idx+1;
            idx ++;

            while (line[idx] != ',')
            {
                idx ++;
            }

            int A = stoi(line.substr(start_idx, idx-start_idx));

            start_idx = idx+1;
            int B = stoi(line.substr(start_idx, line.size()));

            int N_temp = N;
            int sum = 0;
            while (N_temp/2 >= M)
            {
                if (B < A*(N_temp/2))
                {
                    sum += B;
                    N_temp /= 2;
                }
                else
                {
                    break;
                }
            }

            sum += (N_temp-M)*A;
            m.insert(pair<int, string>(sum, name));
        }

        for (set<pair<int, string> >::iterator it=m.begin(); it!=m.end(); it++)
        {
            cout << it->second << " " << it->first << endl;
        }
    }

    return 0;
}
