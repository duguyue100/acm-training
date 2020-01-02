// UVa 541 Error Correction

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>
#include <map>
#include <algorithm>
#include <utility>
#include <stack>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    while (true)
    {
        cin >> n;
        if (n == 0) break;

        int row_sum[n+1];
        int col_sum[n+1];

        for (int i=0; i<=n; i++)
        {
            row_sum[i] = 0;
            col_sum[i] = 0;
        }

        int m;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin >> m;
                row_sum[i] += m;
                col_sum[j] += m;
            }
        }

        int row_count = 0, col_count=0;
        int row_pos = -1, col_pos = -1;
        for (int i=0; i<n; i++)
        {
            if (row_sum[i] % 2 == 1)
            {
                row_count ++;
                row_pos = i+1;
            }

            if (col_sum[i] %2 == 1)
            {
                col_count ++;
                col_pos = i+1;
            }
        }

        if (row_count == 0 && col_count == 0) cout << "OK" << endl;
        else if (row_count == 1 && col_count == 1) cout << "Change bit (" << row_pos << "," << col_pos << ")" << endl;
        else cout << "Corrupt" << endl;
    }

    return 0;
}
