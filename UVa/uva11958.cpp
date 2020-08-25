// UVa 11958 Coming Home

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

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << ": ";

        int K; cin >> K;
        string start_time; cin >> start_time;

        int start_hour = stoi(start_time.substr(0, 2));
        int start_min = stoi(start_time.substr(3, 2));

        // if (start_hour == 24) start_hour = 0;

        int curr_min = start_hour*60+start_min;

        int min_time = 9999;
        for (int k=0; k<K; k++)
        {
            string bus_time; cin >> bus_time;
            int travel_time; cin >> travel_time;

            int bus_hour = stoi(bus_time.substr(0, 2));
            int bus_min = stoi(bus_time.substr(3, 2));

            if (bus_hour == 24) bus_hour = 0;
            int curr_bus_min = bus_hour*60+bus_min;
            
            int tot_travel_time = travel_time;
            if (curr_bus_min < curr_min)
                tot_travel_time += 1440-(curr_min-curr_bus_min);
            else
                tot_travel_time += (curr_bus_min-curr_min);

            if (tot_travel_time < min_time)
                min_time = tot_travel_time;
        }

        cout << min_time << endl;

    }

}
