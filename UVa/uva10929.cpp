// UVa 10929 You can say 11

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

    string n;

    while (cin >> n)
    {
        if (n == "0") break;
        int residual = (n[n.size()-1] - '0') % 11;
        int sum = residual;
        for (int i = n.size()-2; i>=0; i--)
        {
            residual = (residual*10) % 11 + (n[i]-n[i+1]); 
            if (residual < 0) residual += 11;

            sum += residual;
            sum %= 11;
        }

        if (sum == 0)
            cout << n << " is a multiple of 11." << endl;
        else
            cout << n << " is not a multiple of 11." << endl;

    }

    return 0;
}
