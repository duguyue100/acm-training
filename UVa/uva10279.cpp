// UVa 10279 Mine Sweeper

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    int T; cin >> T;

    string b = "..................";
    for (int t=0; t<T; t++)
    {
        string mines[20];
        string mined[20];
        int out[20][20]={0};

        int n; cin >> n;

        for (int i=1; i<=n; i++)
        {
            cin >> mines[i];
            mines[i] = "."+mines[i]+".";
        }
        mines[0] = b;
        mines[n+1] = b;
        for (int i=1; i<=n; i++)
        {
            cin >> mined[i];
            mined[i] = "."+mined[i]+".";
        }
        mined[0] = b;
        mined[n+1] = b;

        bool flag = true;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (mined[i][j] == 'x')
                {
                    if (mines[i][j] == '*')
                        flag = false;

                    if (mines[i-1][j-1] == '*') out[i][j] += 1;
                    if (mines[i-1][j] == '*') out[i][j] += 1;
                    if (mines[i-1][j+1] == '*') out[i][j] += 1;
                    if (mines[i][j-1] == '*') out[i][j] += 1;
                    if (mines[i][j+1] == '*') out[i][j] += 1;
                    if (mines[i+1][j-1] == '*') out[i][j] += 1;
                    if (mines[i+1][j] == '*') out[i][j] += 1;
                    if (mines[i+1][j+1] == '*') out[i][j] += 1;
                }
                else
                {
                    out[i][j] = -1;
                }
            }
        }

        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (out[i][j] == -1)
                {
                    if (flag == false)
                        cout << mines[i][j];
                    else
                        cout << ".";
                }
                else 
                {
                    if (flag == false && mines[i][j] == '*')
                        cout << mines[i][j];
                    else
                        cout << out[i][j];
                }
            }
            cout << endl;
        }
        if (t != T-1)
            cout << endl;
    }

    return 0;
}
