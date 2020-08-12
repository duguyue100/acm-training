// UVa 13181 Sleeping in hostels

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string beds = "";

    while (getline(cin, beds))
    {
        int max_beds = 0;
        int distance = 0;
        bool flag = false;
        int r_most_x = -1;
        for (size_t i=0; i<beds.size(); i++)
        {
            if ((i==0) || (i == (beds.size()-1)))
                flag=true;

            if (beds[i] == '.')
            {
                distance++; 
            }

            // calculating
            if ((beds[i] == 'X') || (i==(beds.size()-1)))
            {
                // left or right
                if (flag == true)
                {
                    distance = distance*2;
                    // max_beds = max(max_beds, distance-1);
                    if (i==(beds.size()-1) && (beds[i] == 'X') && (r_most_x!=-1))
                    {
                        distance = distance/2;
                    }

                    flag = false;
                }

                // cout << distance << " " << max_beds << endl;
                if (distance % 2 == 0) distance = distance/2-1;
                else distance /= 2;
                max_beds = max(max_beds, distance);

                distance = 0;
                if (beds[i] == 'X') r_most_x = i;
            }

        }
        cout << max_beds << endl;
    }

    return 0;
}
