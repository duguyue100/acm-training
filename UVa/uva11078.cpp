// UVa 11078 Open Credit System

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t = 0, n = 0;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n;
        int curr_iq = 0;
        cin >> curr_iq;

        int max_iq = curr_iq;
        int margin = -150001;

        for (int j=1; j<n; j++)
        {
            cin >> curr_iq;

            if (max_iq - curr_iq > margin)
                margin = max_iq - curr_iq;

            if (curr_iq > max_iq)
                max_iq = curr_iq;
        }

        cout << margin << endl;
    }

    return 0;
}
