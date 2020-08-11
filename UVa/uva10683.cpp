// UVa 10683 The decadary watch

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string std_clock = "";

    double t_conversion = 1000.0/864.0;

    while (getline(cin, std_clock))
    {
        string hour = std_clock.substr(0, 2);
        string min = std_clock.substr(2, 2);
        string sec = std_clock.substr(4, 2);
        string msec = std_clock.substr(6, 2);

        // standard time
        long long std_time = stoi(hour)*360000+stoi(min)*6000+stoi(sec)*100+stoi(msec);

        // conversion
        long long dec_time = (long long)(std_time*t_conversion);
       
        string dec_clock = "";

        // msec
        string add_on = (dec_time % 100 > 9) ? to_string(dec_time%100):"0"+to_string(dec_time%100);
        dec_clock = add_on+dec_clock;
        dec_time /= 100;

        // sec
        add_on = (dec_time % 100 > 9) ? to_string(dec_time%100):"0"+to_string(dec_time%100);
        dec_clock = add_on+dec_clock;
        dec_time /= 100;

        // min
        add_on = (dec_time % 100 > 9) ? to_string(dec_time%100):"0"+to_string(dec_time%100);
        dec_clock = add_on+dec_clock;
        dec_time /= 100;

        // hour
        dec_clock = to_string(dec_time%100)+dec_clock;
        dec_time /= 10;

        cout << dec_clock << endl;
    }

    return 0;
}
