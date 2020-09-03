// UVa 340 Master-Mind Hints

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    int n;

    int cases = 1;
    while (cin >> n)
    {
        if (n == 0) break;
        cout << "Game " << cases++ << ":" << endl;

        int a[2000]={0}, b[2000]={0}, c[2000]={0};

        for (int i=0; i<n; i++) cin >> a[i];

        while (true)
        {
            for (int i=0; i<n; i++) cin >> b[i];

            int zeros = 0;
            for (int i=0; i<n; i++)
            {
                if (b[i] == 0) zeros++;
            }

            if (zeros == n) break;

            for (int i=0; i<n; i++) c[i] = a[i];

            int strong = 0, weak = 0;

            // strong cases
            for (int i=0; i<n; i++)
            {
                if ((b[i] == c[i]) && (b[i] != -1) && (c[i] != -1))
                {
                    b[i] = -1;
                    c[i] = -1;
                    strong ++;
                }
            }

            // weak cases
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                {
                    if ((b[i] != -1) && (c[j] != -1))
                    {
                        if (b[i] == c[j])
                        {
                            b[i] = -1;
                            c[j] = -1;
                            weak ++;
                        }
                    }
                }
            }

            cout << "    (" << strong << "," << weak << ")" << endl;
        }
    }

    return 0;
}
