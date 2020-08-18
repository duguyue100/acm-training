// UVa 11057 Exact Sum

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <queue>
#include <tuple>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;

    while (cin >> N)
    {
        vector<int> a;
        unsigned char count[1000002] = {0};
        for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            a.push_back(num);
            count[num] ++;
        }
        sort(a.begin(), a.end());

        int m; cin >> m;

        int middle_idx = 0;
        for (int i=0; i<a.size(); i++)
        {
            if (2*a[i] <= m)
            {
                middle_idx ++;
            }
            else
            {
                break;
            }
        }

        for (int idx=middle_idx-1; idx>=0; idx--)
        {
            if (2*a[idx]<=m)
            {
                if ((m/2 == a[idx] && m%2 == 0 && count[a[idx]]<2))
                    continue;
                if (binary_search(a.begin(), a.end(), m-a[idx]))
                {
                    cout << "Peter should buy books whose prices are " << a[idx] << " and " << m-a[idx] << "." << endl << endl;
                    break;
                }
            }
        }

    }

    return 0;

}
