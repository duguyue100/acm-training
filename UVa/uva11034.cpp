// UVa 11034 Ferry Loading IV

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int C; cin >> C;

    for (int c=1; c<=C; c++)
    {
        int l, m;
        cin >> l >> m;
        l = l*100;

        queue<int> left;
        queue<int> right;

        for (int i=0; i<m; i++)
        {
            int car_l; string side;
            cin >> car_l >> side;

            if (side == "left") left.push(car_l);
            if (side == "right") right.push(car_l);
        }

        int turns = 0;
        bool on_left = true;
        while (!(left.empty() && right.empty()))
        {
            if (on_left == true)
            {
                int sum_l = 0;
                if (!left.empty())
                {
                    while(sum_l+left.front() <= l)
                    {
                        sum_l += left.front();
                        left.pop();
                        if (left.empty()) break;
                    }

                }
                on_left = false;
            }
            else if (on_left == false)
            {
                int sum_r = 0;
                if (!right.empty())
                {
                    while(sum_r+right.front() <= l)
                    {
                        sum_r += right.front();
                        right.pop();
                        if (right.empty()) break;
                    }
                }
                on_left = true;
            }
            turns ++;
        }

        cout << turns << endl;
    }

    return 0;

}
