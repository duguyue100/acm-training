// UVa 1225 Digit Counting

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

    int n; cin >> n;

    for (int i=1; i<=n; i++)
    {
        int m; cin >> m;

        int count[11];
        for (int i=0; i<=10; i++) count[i] = 0;
        for (int i=1; i<=m; i++)
        {
            string temp = to_string(i);
            
            for (int j=0; j<temp.size(); j++)
                count[temp[j]-'0']++;
        }

        for (int i=0; i<9; i++)
            cout << count[i] << " ";
        cout << count[9] << endl;
    }

    return 0;
}
