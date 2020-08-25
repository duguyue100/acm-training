// UVa 13275 Leap Birthdays

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << ": ";

        int d, m, y, qy;
        int years = 0;

        cin >> d >> m >> y >> qy;

        if (isLeapYear(y))
        {
            if (m == 2 && d ==29)
            {
                int i = y;
                while (i <= qy)
                {
                    if (isLeapYear(i))
                        years++;
                    i += 4;
                }
                years --;
            }
            else years = qy-y;
        }
        else
        {
            years = qy-y;
        }

        cout << years << endl;

    }

}
