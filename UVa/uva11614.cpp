// UVa 11614 Etruscan Warriors Never Play Chess

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int num = 0;
    cin >> num;

    for (int i=0; i<num; i++)
    {
        unsigned long long n = 0;
        cin >> n;

        cout << (unsigned long long)(sqrt(2*n+0.25)-0.5) << endl;
    }

    return 0;
}
