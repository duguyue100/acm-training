// UVa 12459 Bees’ ancestors

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    unsigned long long a[81];
    a[1] = 1; a[2] = 2; a[3] = 3;

    for (int i=4; i<=80; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    int N;
    while (cin >> N && N!=0)
    {
        cout << a[N] << endl;
    }


    return 0;
}
