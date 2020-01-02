// UVa 900 Brick Wall Patterns

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

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    while (cin >> n)
    {
        if (n == 0) break;

        if (n == 1) cout << 1 << endl;
        if (n == 2) cout << 2 << endl;

        if (n > 2)
        {
            long long prev = 1, next = 2;
            for (int i=3; i<=n; i++)
            {
                long long temp = next;
                next = prev+next;
                prev = temp;
            }
            cout << next << endl;
        }

    }

    return 0;
}
