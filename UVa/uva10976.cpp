// UVa 10976 Fractions Again?!

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

    int k;

    while (cin >> k)
    {
        int n = 0;
        vector<string> stack;
        for (int y=k+1; y<=2*k; y++)
        {
            if (y-k == 0)
            {
                continue; 
            }
            else if (k*y % (y-k) == 0)
            {
                n++;
                stringstream buffer;
                buffer << "1/" << k << " = " << "1/" << k*y/(y-k) << " + 1/" << y;
                stack.push_back(buffer.str());  
            }
        }
        cout << n << endl;
        for (int i=0; i<n; i++)
        {
            cout << stack[i] << endl;
        }
    }

    return 0;
}
