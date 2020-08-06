// UVa 13012 Identifying tea

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t, c;

    while (cin >> t)
    {
        int a = 0;
        for (int i=0; i<5; i++)
        {
            cin >> c;
            if (c == t) a++;
        }
        cout << a << endl;
    }

    return 0;
}
