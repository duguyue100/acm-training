// UVa 13007 D as in Daedalus

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <bitset>
#include <vector>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N, M;

    while (cin >> N >> M)
    {
        int o_p = 0;
        int n_p = 0;
        for (int m=0; m<M; m++)
        {
            int b = 0, d = 0;
            cin >> b >> d;

            int a = 0;
            int sum = 0;
            for (int i=0; i<N-1; i++)
            {
                cin >> a;
                sum += a;
            }

            // calculate original profit
            if (b >= sum+d)
            {
                o_p += d;
            }

            // calculate new profit
            if ((b-sum) > 0)
            {
                if ((b-sum) / 10000) n_p += 10000;
                else if ((b-sum) / 1000) n_p += 1000;
                else if ((b-sum) / 100) n_p += 100;
                else if ((b-sum) / 10) n_p += 10;
                else if ((b-sum) / 1) n_p += 1;
            }

        }

        cout << n_p-o_p << endl;
    }
    return 0;
}
