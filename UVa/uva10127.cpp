// UVa 10127 Ones

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

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    while (cin >> n)
    {
        int sum = 1 % n;
        int residual = 1 % n;
        int digits = 1;

        while (sum % n !=0)
        {
            residual = (residual*10)%n;
            sum += residual;
            sum %= n;
            digits ++;
        }

        cout << digits << endl;
    }

    return 0;
}
