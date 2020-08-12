// UVa 12996 Ultimate Mango Challenge

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int C;
    cin >> C;

    for (int c=1; c<=C; c++)
    {
        cout << "Case " << c << ": ";

        int kind, max_limit;
        cin >> kind >> max_limit;

        int m[15] = {0};
        int ml[15] = {0}; 

        int sum=0;
        for (int i=0; i<kind; i++)
        {
            cin >> m[i];
            sum += m[i];
        }

        for (int i=0; i<kind; i++)
        {
            cin >> ml[i];
        }

        if (sum > max_limit)
        {
            cout << "No";
        }
        else
        {
            bool flag = true;
            for (int i=0; i<kind; i++)
            {
                if (ml[i]<m[i])
                {
                    flag = false;
                    break;
                }
            }
            
            if (flag) cout << "Yes";
            else cout << "No";
        }

        cout << endl;
    }

    return 0;
}
