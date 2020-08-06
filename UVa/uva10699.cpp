// UVa 10699 Count the factors

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
#include <cmath>
#include <set>

using namespace std;

int factor(int n)
{
    int a;
    if (n%2 == 0)
        return 2;

    for (a=3; a<=sqrt(n); a++)
    {
        if (n%a == 0)
            return a;
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

        long long n_copy = n;

        int r;
        set<int> factors;
        while (n>1)
        {
            r = factor(n);

            factors.insert(r); 

            n /= r;
        }

        cout << n_copy << " : " << factors.size() << endl;

    }

    return 0;
}
