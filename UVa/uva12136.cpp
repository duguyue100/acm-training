// UVa 12136 Schedule of a Married Man

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

        string start_time; cin >> start_time;
        string end_time; cin >> end_time;

        bool time_line[1441] = {0};

        int start_hour = stoi(start_time.substr(0, 2));
        int start_min = stoi(start_time.substr(3, 2));
        int start_time_min = start_hour*60+start_min;

        int end_hour = stoi(end_time.substr(0, 2));
        int end_min = stoi(end_time.substr(3, 2));
        int end_time_min = end_hour*60+end_min;

        for (int i=start_time_min; i<=end_time_min; i++)
            time_line[i] = true;

        cin >> start_time >> end_time; 

        start_hour = stoi(start_time.substr(0, 2));
        start_min = stoi(start_time.substr(3, 2));
        start_time_min = start_hour*60+start_min;

        end_hour = stoi(end_time.substr(0, 2));
        end_min = stoi(end_time.substr(3, 2));
        end_time_min = end_hour*60+end_min;

        bool flag = true;
        for (int i=start_time_min; i<=end_time_min; i++)
        {
            if (time_line[i] == true)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "Hits Meeting" << endl;
        }
        else cout << "Mrs Meeting" << endl;

    }

}
