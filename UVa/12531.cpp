// UVa 12531 Hours and Minutes

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int calculate_degree(int h, int m)
{
    int curr_h = h, curr_m = m;
    int m_angle = m*6;
    if (curr_m == 60) curr_h ++;

    int h_angle = curr_h*30+(int)(round(m/12))*6;

    if (h_angle < m_angle)
        return m_angle-h_angle;
    return h_angle-m_angle;

}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int degree;

    bool a[361] = {0};

    // pre-calculate
    int d;
    for (int h=0; h<=11; h++)
    {
        for (int m=0; m<=60; m++)
        {
            d = calculate_degree(h, m);
            a[d] = true;
        }
    }

    while (cin >> degree)
    {
        if (a[degree])
        {
            cout << "Y" << endl;
        }
        else cout << "N" << endl;
    }

    return 0;
}
