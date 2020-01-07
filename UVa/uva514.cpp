// UVa 514 Rails

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
#include <vector>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    
    while (true)
    {
        cin >> n;
        if (n == 0) break;

        stack<int> track_a;
        stack<int> station;

        while(true)
        {
            track_a = stack<int>();
            station = stack<int>();
            // track A
            for (int i=n; i>=1; i--)
            {
                track_a.push(i);
            }

            int train=0; cin >> train;
            if (train == 0) break;

            int flag = true;
            for (int i=2; i<=n+1; i++)
            {
                if (station.empty() || station.top() < train)
                {
                    while (!track_a.empty())
                    {
                        station.push(track_a.top());
                        track_a.pop();
                        if (station.top() == train) break;
                    }
                }

                if (station.top() == train) station.pop();
                else flag = false;

                if (i <= n) cin >> train;
            }


            if (flag == true)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            
        }

        cout << endl;

    }

    return 0;
}
