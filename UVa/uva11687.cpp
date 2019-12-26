// Uva 11687 Digits

#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int cal_recurrence(string digits, int curr_iter)
{
    int digits_len = (int)digits.length();
    
    if (digits == to_string(digits_len))
        return curr_iter+1;

    if (digits != to_string(digits_len))
        return cal_recurrence(to_string(digits_len), curr_iter+1);

}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string digits="";
    while (getline(cin, digits))
    {
        if (digits == "END") break;

        int times = cal_recurrence(digits, 0);

        cout << times << endl; 
    }

}
