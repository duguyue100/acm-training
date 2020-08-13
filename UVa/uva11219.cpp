// UVa 11219 How old are you?

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;
    cin >> N;
    
    for (int i=1; i<=N; i++)
    {
        cout << "Case #" << i << ": ";

        string curr_date, birth_date;
        cin >> curr_date >> birth_date;

        int c_d = stoi(curr_date.substr(0, 2));
        int c_m = stoi(curr_date.substr(3, 2));
        int c_y = stoi(curr_date.substr(6, 4));
        
        int b_d = stoi(birth_date.substr(0, 2));
        int b_m = stoi(birth_date.substr(3, 2));
        int b_y = stoi(birth_date.substr(6, 4));

        if (c_y<=b_y)
        {
            if (c_y == b_y)
            {
                if (c_m <= b_m)
                {
                    if (c_m == b_m)
                    {
                        if (c_d <= b_d)
                        {
                            if (c_d == b_d)
                            {
                                cout << 0;
                            }
                            else
                            {
                                cout << "Invalid birth date";
                            }
                        }
                        else
                        {
                            cout << 0;
                        }
                    }
                    else
                    {
                        cout << "Invalid birth date";
                    }
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                cout << "Invalid birth date";
            }
        }
        else
        {
            // c_y > b_y
            
            if ((c_y-b_y) >= 131)
            {
                if (c_y-b_y > 131)
                {
                    cout << "Check birth date";
                }
                else
                {
                    if ((c_m > b_m) || (c_m==b_m && c_d>=b_d))
                    {
                        cout << "Check birth date";
                    }
                    else
                    {
                        cout << 130;
                    }
                }
            }
            else
            {
                // age < 131
                int temp_age = c_y-b_y;

                if (c_m > b_m)
                {
                    cout << temp_age;
                }
                else if (c_m == b_m)
                {
                    if (c_d >= b_d)
                    {
                        cout << temp_age;
                    }
                    else
                    {
                        cout << temp_age-1;
                    }
                }
                else
                {
                    cout << temp_age-1;
                }

            }
        }

        cout << endl;
    }

    return 0;
}
