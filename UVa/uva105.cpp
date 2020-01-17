// UVa 105 The Skyline Problem

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

    int l, h, r;

    int s[10010] = {0};

    int left=10010, right=0;
    while (cin >> l >> h >> r)
    {
        for (int i=l; i<r; i++)
        {
            if (h > s[i]) s[i] = h;
        }

        if (left > l) left = l;
        if (right < r) right = r;
    }

    cout << left << " " << s[left];

    for (int i=left+1; i<=right; i++)
    {
        if (s[i-1] != s[i])
        {
            cout << " " << i << " " << s[i];
        }
    }

    cout << endl;

    return 0;
}
