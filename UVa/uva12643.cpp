// UVa 12643 Tennis Rounds

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N, xi, xj;

    while (cin >> N >> xi >> xj)
    {
        for (int i=1; i<=N; i++)
        {
            double base = pow(2.0, (double)i);

            int x_round = (int)ceil((double)xi/base); 
            int j_round = (int)ceil((double)xj/base); 

            if (x_round == j_round)
            {
                cout << i << endl;
                break;
            }
        }
    }


    return 0;
}
