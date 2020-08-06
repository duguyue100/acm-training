// UVa 10474 Where is the Marble?

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

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n, q;
    int n_cases = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0) break;

        vector<int> numbers;
        for (int i=1; i<=n; i++)
        {
            int m; cin >> m;
            numbers.push_back(m);
        }

        sort(numbers.begin(), numbers.end());

        cout << "CASE# " << n_cases << ":" << endl;
        for (int i=1; i<=q; i++)
        {
            int m; cin >> m;

            vector<int>::iterator idx;
            idx = lower_bound(numbers.begin(), numbers.end(), m);

            if (*idx != m)
                cout << m << " not found" << endl;
            else
                cout << m << " found at " << (idx-numbers.begin())+1 << endl;
        }

        n_cases ++;
            
    }

    return 0;
}
