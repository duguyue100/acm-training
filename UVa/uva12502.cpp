// UVa 12502 Three Families

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
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        double a, b, m;
        cin >> a >> b >> m;

        int money = (int)floor((m*(2*a-b)/(a+b)));
        cout << ((money < 0) ? 0:money) << endl;
    }

    return 0;
}
