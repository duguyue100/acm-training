// UVa 12150 Pole Position

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;
    
    while (cin >> N)
    {
        if (N == 0) break;

        int c_no[1001] = {0};
        int p_no[1001] = {0};
        int o_no[1001] = {0};
        bool flag = true;

        for (int i=0; i<N; i++)
            cin >> c_no[i] >> p_no[i];

        for (int i=0; i<N; i++)
        {
            int ori_pos = (i+1)+p_no[i];
            if (ori_pos <= 0 || ori_pos > N)
            {
                cout << -1 << endl;
                flag = false;
                break;
            }

            if (o_no[ori_pos-1] == 0)
            {
                int ori_pos = (i+1)+p_no[i];


                o_no[ori_pos-1] = c_no[i];
            }
            else
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << o_no[0];
            for (int i=1; i<N; i++)
                cout << " " << o_no[i];
            cout << endl;
        }
    }


    return 0;
}
