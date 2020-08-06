// UVa 674 Coin Change

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
#include <tuple>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    long f[6][7489+2];
    f[0][0] = 0; f[1][0]=1; f[2][0]=1; f[3][0]=1; f[4][0]=1; f[5][0]=1;

    for (int i=1; i<=7489; i++)
    {
        for (int j=1; j<=5; j++)
        {
            f[j][i] = 0;
            if (i >= 50)
            {
                f[j][i] += (j >= 5) ? f[5][i-50]:0;
            }
            if (i >=25)
            {
                f[j][i] += (j >= 4) ? f[4][i-25]:0;
            }
            if (i >= 10)
            {
                f[j][i] += (j >= 3) ? f[3][i-10]:0;
            }
            if (i >= 5)
            {
                f[j][i] += (j >= 2) ? f[2][i-5]:0;
            }
            if (i >= 1)
            {
                f[j][i] += (j >= 1) ? f[1][i-1]:0;
            }
        }

    }


    while (cin >> n)
    {
        if (n == 0)
        {
            cout << 1 << endl;
            continue;
        }

        cout << f[5][n] << endl;
    }


    return 0;
}
