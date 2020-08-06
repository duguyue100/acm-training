// UVa 11349 Symmetric Matrix

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

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n_case;
    cin >> n_case;
    cin.ignore();

    for (int i=1; i<=n_case; i++)
    {
        char c;
        // read index
        string curr_str = "";
        c = getchar();
        c = getchar();
        c = getchar();
        c = getchar();

        int n = 0;
        while(true)
        {
            c = getchar();

            if (c == '\n')
            {
                n = stoi(curr_str);
            }
            else curr_str += c;

            if (c == '\n') break;
        }

        long long M[n+1][n+1], MT[n+1][n+1];

        bool flag = true;
        for (int j=1; j<=n; j++)
            for (int k=1; k<=n; k++)
            {
                cin >> M[j][k];
                if (M[j][k] < 0) flag=false;
                MT[n-j+1][n-k+1] = M[j][k];
            }

        if (flag == true)
        {
            for (int j=1; j<=n; j++)
                for (int k=1; k<=n; k++)
                    if (M[j][k] != MT[j][k]) flag = false;
        }

        cout << "Test #" << i << ": ";
        if (flag == true) cout << "Symmetric." << endl;
        else cout <<  "Non-symmetric." << endl;
    }

    return 0;
}
