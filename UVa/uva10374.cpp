// UVA 10374 Election

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        int n; cin >> n;
        string name, party;
        getline(cin, name);

        map<string, string> m;
        for (int i=0; i<n; i++)
        {
            getline(cin, name);
            getline(cin, party);
            
            m[name] = party;
        }

        map<string, int> vote;

        int M; cin >> M;
        getline(cin, name);
        for (int i=0; i<M; i++)
        {
            getline(cin, name);
            vote[name] ++;
        }

        // find max
        string max_name;
        int max_vote = 0;
        for (map<string, int>::iterator it=vote.begin(); it!=vote.end(); it++)
        {
            if (it->second > max_vote)
            {
                max_vote = it->second;
                max_name = it->first;
            }
        }

        int count = 0; 
        for (map<string, int>::iterator it=vote.begin(); it!=vote.end(); it++)
        {
            if (it->second == max_vote)
                count ++;
        }

        if (count > 1)
        {
            cout << "tie" << endl;
        }
        else
        {
            cout << m[max_name] << endl;
        }

        if (t != T) cout << endl;
    }

    return 0;
}
