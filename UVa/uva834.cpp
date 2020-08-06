// UVa 834 Continued Fractions

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

    int n, m;
    
    while (cin >> n >> m)
    {
        cout << "[";
        int temp = n/m;
        cout << temp;

        temp = n-temp*m;
        n = m; m=temp;

        if (m != 0)
        {
            cout << ";";

            while (true)
            {
                temp = n/m;
                cout << temp;

                temp = n-temp*m;
                n = m; m = temp;

                if (m == 0)
                    break;
                else
                {
                    if (n % m == 0)
                    {
                        cout << "," << n/m;
                        break;
                    }
                    else cout << ",";
                }
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
