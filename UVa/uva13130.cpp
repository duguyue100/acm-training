// UVa 13130 Cacho

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
        int flag = 1;
        int m = 0;
        cin >> m;
        for (int j=0; j<4; j++)
        {
            int k = 0;
            cin >> k;
            if (k-m == 1)
            {
                m = k;
            }
            else flag = 0;
        }

        if (flag) cout << "Y";
        else cout << "N";
        cout << endl;

    }

    return 0;
}
