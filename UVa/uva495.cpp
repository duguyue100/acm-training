// UVa 406 Prime Cuts

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

    int n;

    unsigned char sum[5001][2500] = {0};
    int n1[1200] = {0};
    int n2[1200] = {0};
    int lens[5001] = {0};

    int len = 1;
    n1[0] = 1; n2[0] = 1;
    for (int k=3; k<=5000; k++) 
    {
        int curr_len = len;
        for (int i=0; i<curr_len; i++)
        {
            sum[k][i] = sum[k][i]+n1[i]+n2[i];
            if (sum[k][i] >= 10)
            {
                sum[k][i+1] ++;
                sum[k][i] = sum[k][i] % 10;
                
                if (i == len-1) len++;
            }
        }

        for (int i=0; i<len; i++)
        {
            n2[i] = n1[i]; n1[i] = sum[k][i];
        }
        lens[k] = len;
    }

    while (cin >> n)
    {
        cout << "The Fibonacci number for " << n << " is ";
        if (n == 0) cout << 0;
        else if (n == 1 || n == 2) cout << 1;
        else
        {
            for (int i=lens[n]-1; i>=0; i--)
                cout << (int)sum[n][i];
        }
        cout << endl;
    }


    return 0;
}
