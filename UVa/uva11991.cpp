// UVa 11991 Easy Problem from Rujia Liu?

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n, m;

    while (cin >> n >> m)
    {
        bool a[1000001] = {0};
        map<int, vector<int> > book;

        for (int i=0; i<n; i++)
        {
            int num; cin >> num;

            if (a[num] == false)
            {
                a[num] = true;
                vector<int> b; b.push_back(i);
                book[num] = b;
            }
            else
            {
                book[num].push_back(i);
            }
        }

        for (int i=0; i<m; i++)
        {
            size_t k, v; cin >> k >> v;
            
            if (a[v] == true)
            {
                // cout << v << "->";
                // for (int j=0; j<book[v].size(); j++) cout << book[v][j] << " ";
                // cout << endl;
                if (k <= book[v].size())
                    cout << book[v][k-1]+1 << endl;
                else
                    cout << 0 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
