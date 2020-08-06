// UVa 583 Prime Factors

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
#include <vector>
#include <bitset>

using namespace std;

long long factor(long long n)
{
    if (n%2 == 0) return 2;
    for (long long a=3; a*a<=n; a+=2)
    {
        if (n%a == 0) return a;
    }

    return n;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    long long n;

    while (cin >> n)
    {
        if (n == 0) break;

        long long r = 0;

        cout << n << " =";
        if (n == 1)
        {
            cout << " ";
        }
        else if (n == -1)
        {
            cout << " -1 x ";
        }
        else if (n < -1)
        {
            cout << " -1";
            n *= -1;
        }
        else
        {
            r = factor(n);
            cout << " " << r;
            n /= r;
        }

        while (n > 1)
        {
            r = factor(n);
            cout << " x " << r;
            n /= r;
        }
        cout << endl;
    }

    return 0;
}
