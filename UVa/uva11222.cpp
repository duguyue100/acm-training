// UVa 11222 Only I did it!

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <queue>
#include <tuple>
#include <set>

using namespace std;

int find_unique(bool a[4][10001], set<int> unique_qs, int num1, int num2, int num3)
{
    int unique_number = 0;
    for (set<int>::iterator it=unique_qs.begin(); it!=unique_qs.end(); it++)
    {
        if (a[num1][*it]==true && a[num2][*it]==false && a[num3][*it]==false)
            unique_number ++;
    }

    return unique_number;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case #" << t << ":" << endl;

        bool a[4][10001] = {0};
        set<int> unique_qs;
        int max_num = 0;
        for (int i=1; i<=3; i++)
        {
            int S; cin >> S;
            for (int j=0; j<S; j++)
            {
                int num; cin >> num;
                a[i][num] = true;
                unique_qs.insert(num);
            }
        }

        int unique_nums[4] = {0};
        int max = -1;
        unique_nums[1] = find_unique(a, unique_qs, 1, 2, 3);
        max = (max < unique_nums[1]) ? unique_nums[1]:max;
        unique_nums[2] = find_unique(a, unique_qs, 2, 1, 3);
        max = (max < unique_nums[2]) ? unique_nums[2]:max;
        unique_nums[3] = find_unique(a, unique_qs, 3, 1, 2);
        max = (max < unique_nums[3]) ? unique_nums[3]:max;

        for (int i=1; i<=3; i++)
        {
            if (unique_nums[i] == max)
            {
                int num1, num2, num3;
                if (i == 1) {num1=1; num2=2; num3=3;}
                else if (i == 2) {num1=2; num2=1; num3=3;}
                else if (i == 3) {num1=3; num2=1; num3=2;}
                cout << i << " " << unique_nums[i];
                for (set<int>::iterator it=unique_qs.begin(); it!=unique_qs.end(); it++)
                {
                    if (a[num1][*it]==true && a[num2][*it]==false && a[num3][*it]==false)
                        cout << " " << *it;
                }
                cout << endl;
            }
        }

    }


    return 0;

}
