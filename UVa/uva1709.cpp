// UVa 1709 Amalgamated Artichokes

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    double p, a, b, c, d;
    int n;

    while (cin >> p >> a >> b >> c >> d >> n)
    {
        double curr_p = p*(sin(a+b)+cos(c+d)+2);
        double max_p = curr_p;
        double margin = 0;

        for (int i=2; i<=n; i++)
        {
            curr_p = p*(sin(a*i+b)+cos(c*i+d)+2);

            if (max_p - curr_p > margin)
                margin = max_p-curr_p;
            
            if (curr_p > max_p)
                max_p = curr_p;
        }

        printf("%.6f\n", margin);
    }

    return 0;
}
