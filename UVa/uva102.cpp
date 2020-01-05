// UVa 102 Ecological Bin Packing

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>
#include <map>
#include <algorithm>
#include <utility>
#include <stack>
#include <tuple>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int cans[10];
    
    while (cin >> cans[1])
    {
        for (int i=2; i<=9; i++) cin >> cans[i];

        int min_dist = 0;
        int sum_dist = 0;
        string min_conf = "BCG";

        // BCG
        sum_dist = cans[4]+cans[7]+cans[3]+cans[9]+cans[2]+cans[5];
        min_dist = sum_dist;

        // BGC
        sum_dist = cans[4]+cans[7]+cans[2]+cans[8]+cans[3]+cans[6];
        if (min_dist > sum_dist)
        {
            min_dist = sum_dist; min_conf = "BGC";
        }

        // CBG 
        sum_dist = cans[6]+cans[9]+cans[1]+cans[7]+cans[2]+cans[5];
        if (min_dist > sum_dist)
        {
            min_dist = sum_dist; min_conf = "CBG";
        }

        // CGB
        sum_dist = cans[6]+cans[9]+cans[2]+cans[8]+cans[1]+cans[4];
        if (min_dist > sum_dist)
        {
            min_dist = sum_dist; min_conf = "CGB";
        }

        // GBC
        sum_dist = cans[5]+cans[8]+cans[1]+cans[7]+cans[3]+cans[6];
        if (min_dist > sum_dist)
        {
            min_dist = sum_dist; min_conf = "GBC";
        }

        // GCB
        sum_dist = cans[5]+cans[8]+cans[3]+cans[9]+cans[1]+cans[4];
        if (min_dist > sum_dist)
        {
            min_dist = sum_dist; min_conf = "GCB";
        }

        cout << min_conf << " " << min_dist << endl;

    }


    return 0;
}
