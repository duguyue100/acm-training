// UVa 10931 Parity

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

    long long n;

    while (cin >> n)
    {
        if (n == 0) break;

        int sum = 0;
        string bin = "";
        while (n != 0)
        {
            if (n % 2 == 1)
            {
                sum++;
                bin = "1"+bin;
            }
            else bin = "0"+bin;
            n = n/2;
        }

        cout << "The parity of " << bin << " is " << sum << " (mod 2)." << endl;
    }

    return 0;
}
