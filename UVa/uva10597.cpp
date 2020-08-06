// UVa 10597 Fibonacci Numbers

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

    while (cin >> n)
    {
        int n1[1005] = {0};
        int n2[1005] = {0};
        int sum[1005] = {0};

        if (n == 1 || n == 2) cout << 1;
        else
        {
            int len = 1;
            n1[0] = 1;
            n2[0] = 1;
            for (int k=3; k<=n; k++) 
            {
                int curr_len = len;
                for (int i=0; i<curr_len; i++)
                {
                    sum[i] = sum[i]+n1[i]+n2[i];
                    if (sum[i] >= 10)
                    {
                        sum[i+1] ++;
                        sum[i] = sum[i] % 10;
                        
                        if (i == len-1) len++;
                    }
                }

                for (int i=0; i<len; i++)
                {
                    n2[i] = n1[i]; n1[i] = sum[i]; sum[i] = 0;
                }
            }

            for (int i=len-1; i>=0; i--)
                cout << n1[i];
            cout << endl;
        }
    }


    return 0;
}
