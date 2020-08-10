// UVa 12750 Keep Rafa at Chelsea!

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t = 0;
    cin >> t;

    for (int i=1; i<=t; i++)
    {
        cout << "Case " << i << ": ";

        int n;
        cin >> n;

        char g;
        int losses = 0;
        bool flag = false;
        for (int j=1; j<=n; j++)
        {
            cin >> g;
            if (g != 'W')
                losses ++;
            else
                losses = 0;

            if (losses == 3 and flag==false)
            {
                cout << j;
                flag = true;
            }
        }
        if (flag == false)
            cout << "Yay! Mighty Rafa persists!";
        cout << endl;
    }

    return 0;
}
