// UVa 13034 Solve Everything :-)

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cout << "Set #" << i+1 << ": ";
        int flag = 1;
        for (int j=0; j<13; j++)
        {
            int m;
            cin >> m;
            if (m == 0) flag = 0;
        }
        if (flag) cout << "Yes";
        else cout << "No";
        cout << endl;
                
    }

    return 0;
}
