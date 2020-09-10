// UVa 10920 Spiral Tap

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    long long s, p;

    while (cin >> s >> p && s != 0 && p != 0)
    {
        long long x = 0, y = 0;
        // find boundary
        long long b = (long long)sqrt((double)p);

        while (b*b < p || b%2 == 0)
        {
            b++;
        }

        if (p == 1)
        {
            x = (s+1)/2; y = (s+1)/2;
        }
        else
        {
            long long k = b*b;
            x = b; y = b;

            if (p <= k && p >= (k-b+1))
            {
                // go down
                y = b-(k-p);
            }
            else if (p < (k-b+1) && p >= (k-2*(b-1)))
            {
                // go left
                y = 1;
                x = b-((k-b+1)-p);
            }
            else if (p < (k-2*(b-1)) && p >= (k-3*(b-1)))
            {
                // go up
                x = 1;
                y = 1+((k-2*(b-1))-p);
            }
            else if (p < (k-3*(b-1)) && p >= (k-4*(b-1)+1))
            {
                // go right
                x = 1+((k-3*(b-1))-p);
            }

            if (b != s)
            {
                long long inc = ((s+1)/2)-((b+1)/2);
                x += inc;
                y += inc;
            }
        }

        cout << "Line = " << y << ", column = " << x << "." << endl;
    }

    return 0;
}
