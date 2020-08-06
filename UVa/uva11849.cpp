// UVa 11849 CD

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
#include <ctime>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    long long n, m;
    
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0) break;

        set<long long> cds;
        for (int i=1; i<=n; i++)
        {
            long long id;
            cin >> id;
            cds.insert(id);
        }

        
        long long sum = 0;
        for (int i=1; i<=m; i++)
        {
            long long id;
            cin >> id;
            
            if (cds.count(id)) sum++;
        }

        cout << sum << endl;

    }

    return 0;
}
