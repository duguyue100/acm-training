// UVa 11650 Mirror Clock

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N; cin >> N;

    for (int t=0; t<N; t++)
    {
        string time; cin >> time;
        int old_hour = stoi(time.substr(0, 2));
        int old_min = stoi(time.substr(3, 2));

        int new_hour_base = 12-old_hour-1;
        int new_min_base = 60-old_min;

        if (new_min_base == 60)
        {
            new_hour_base ++;
            new_min_base = 0;
        }

        if (new_hour_base == 0) new_hour_base = 12;
        if (new_hour_base < 0) new_hour_base = 11;

        printf("%02d:%02d\n", new_hour_base, new_min_base);
    }

}
