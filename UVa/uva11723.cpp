// UVa 11723 Numbering Roads!

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

    int n, r;
    int cases = 1;
    while (cin >> r >> n)
    {
        if (r == 0 && n == 0) break;

        int road = r/n;
        if (r % n == 0) road --;

        cout << "Case " << cases << ": ";
        if (road >= 27) cout << "impossible";
        else cout << road;
        cout<< endl;

        cases ++;
    }


    return 0;
}
