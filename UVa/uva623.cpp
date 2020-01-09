// UVa 623 500!

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

    int fact[1001][2700] = {0};
    int lens[1001] = {0};
    fact[1][0] = 1; lens[1] = 1;

    for (int i = 2; i<=1000; i++)
    {
        int curr_len = lens[i-1];
        int len = lens[i-1];
        for (int j=0; j<curr_len; j++)
        {
            fact[i][j] += fact[i-1][j]*i;
            if (fact[i][j] >= 10)
            {
                fact[i][j+1] += fact[i][j]/10;
                fact[i][j] = fact[i][j] % 10;
            }
        }
        
        while (fact[i][len] != 0)
        {
            if (fact[i][len] >= 10)
            {
                fact[i][len+1] += fact[i][len]/10;
                fact[i][len] = fact[i][len] % 10;
            }
            len++;
        }

        lens[i] = len;
    }


    while (cin >> n)
    {
        cout << n << "!" << endl;
        if (n == 0) cout << 1;
        else
        {
            for (int i=lens[n]-1; i>=0; i--)
                cout << fact[n][i];
        }
        cout<< endl;
    }

    return 0;
}
