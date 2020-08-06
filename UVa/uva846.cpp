// UVa 846 Steps

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

    int n_cases;
    cin >> n_cases;

    for (int i=1; i<=n_cases; i++)
    {
        long n, m;

        cin >> n >> m;
        
        if (n == m) cout << 0 << endl;
        else
        {
            long dist = m-n;

            long base_steps = (long)sqrt(double(dist));

            int k = -1;
            for( int j=base_steps+1; j>=1; j--)
            {
                k = dist/j-j;
                if (k >= 0) break;
            }

            dist = dist-base_steps*(k+base_steps);
            long steps = 2*base_steps-1+k;

            cout << steps+(dist>0) << endl;
        }

    }

    return 0;
}
