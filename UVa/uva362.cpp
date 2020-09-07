// UVa 362 18,000 Seconds Remaining

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n, t=1;

    while (cin >> n && n != 0)
    {

        cout << "Output for data set " << t++ << ", " << n << " bytes:" << endl;
        int tot_sec = 0;
        int sum_byte = 0;
        int last_5 = 0;

        int m;
        while (sum_byte != n)
        {
            cin >> m;
            tot_sec ++;
            sum_byte += m;

            // processing
            if (tot_sec % 5 == 0)
            {
                last_5 += m;
                cout << "   Time remaining: ";
                if (last_5 == 0)
                {
                    cout << "stalled" << endl;
                }
                else
                {
                    double remaining = n-sum_byte;

                    cout << (int)ceil((remaining*5.0)/last_5);

                    cout << " seconds" << endl;
                }

                last_5 = 0;
            }
            else
            {
                last_5 += m;
            }

        }

        cout << "Total time: " << tot_sec << " seconds" << endl << endl;
    }

    return 0;
}
