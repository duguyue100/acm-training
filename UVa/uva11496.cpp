// UVa 11496 Musical Loop

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;
    
    while (cin >> N)
    {
        if (N == 0) break;

        int a[10010] = {};

        for (int i=0; i<N; i++) cin >> a[i];

        a[N] = a[0]; a[N+1] = a[1];

        // calculate peak;
        int num_peaks = 0;
        for (int i=1; i<=N; i++)
        {
            if ((a[i]>a[i-1] && a[i]>a[i+1]) ||
                (a[i]<a[i-1] && a[i]<a[i+1]))
                num_peaks++;
        }

        cout << num_peaks << endl;
    }


    return 0;
}
