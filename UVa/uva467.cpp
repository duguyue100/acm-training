// UVa 467 Synching Signals

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <tuple>
#include <set>

using namespace std;

bool all_green(bool light[11], int num_light)
{
    for (int i=0; i<num_light; i++)
    {
        if (light[i] == false)
            return false;
    }

    return true;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;
    int set_number = 0;

    while (getline(cin, line))
    {
        set_number ++;
        // separate numbers
        int a[11]={0};
        bool light[11] = {0};
        int num_light = 0;
        size_t start_idx = 0;
        for (size_t i=0; i<=line.size(); i++)
        {
            if (line[i] == ' ' || i == line.size()-1)
            {
                a[num_light] = stoi(line.substr(start_idx, i-start_idx+1));
                num_light++;
                start_idx = i;
            }
        }

        // init the light condition
        int min_time = a[0]-5;
        for (int i=1; i<num_light; i++)
        {
            min_time = min(a[i]-5, min_time);
        }

        for (int i=0; i<num_light; i++)
        {
            if (a[i]-5 == min_time)
            {
                light[i] = false;
            }
            else
            {
                light[i] = true;
            }
        }

        // simulate
        bool flag = false;
        int sync_min = 0;
        int sync_sec = 0;

        for (int t=0; t<3600; t++)
        {
            int act_time = min_time+t;

            if (all_green(light, num_light) == true)
            {
                flag = true;
                sync_min = (act_time-1)/60;
                sync_sec = (act_time-1)%60;
                break;
            }

            for (int i=0; i<num_light; i++)
            {
                if ((act_time%(a[i]*2)) < (a[i]-5))
                {
                    light[i] = true;
                }
                else
                {
                    light[i] = false;
                }
            }
        }

        cout << "Set " << set_number << " ";
        if (flag == false || (sync_min == 60 && sync_sec > 0))
        {
            cout << "is unable to synch after one hour.";
        }
        else
        {
            cout << "synchs again at ";
            cout << sync_min << " minute(s) and " << sync_sec << " second(s) after all turning green.";
        }

        cout << endl;
    }

    return 0;
}
