// UVa 441 Lotto

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

    cin >> n;
    while (true)
    {
        if (n == 0) break;

        int a[n+1];

        for (int i=0; i<n; i++)
            cin >> a[i];

        for (int i=0; i<n-5; i++)
            for (int j=i+1; j<n-4; j++)
                for (int k=j+1; k<n-3; k++)
                    for (int d=k+1; d<n-2; d++)
                        for (int l=d+1; l<n-1; l++)
                            for (int p=l+1; p<n; p++)
                                cout << a[i] << " " << a[j] << " " << a[k] << " " << a[d] << " " << a[l] << " " << a[p] << endl;

        cin >> n;
        if (n != 0)
            cout << endl;
    }

    return 0;
}
