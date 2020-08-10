// UVa 12798 Handball

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n=0, m=0;

    while (cin >> n >> m)
    {
        int num_players = 0;
        for (int i=0; i<n; i++)
        {
            bool flag = false;
            int k = 0;
            for (int j=0; j<m; j++)
            {
                cin >> k;
                if (k==0) flag = true;
            }
            if (flag == false) num_players ++;
        }

        cout << num_players << endl;
    }


    return 0;
}
