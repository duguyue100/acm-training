#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(void)
{
    int N = 0;
    string s = "";
    int position = 0;
    int num_steps = 0;

    cin >> N;

    for (int i=1; i<=N; i++)
    {
        cin >> s;
        if (s[0] == 'A' || s[0] == 'P' || s[0] == 'O' || s[0] == 'R')
        {
            num_steps += abs(position-0);
            position = 0;
        }
        else if (s[0]=='B' || s[0] == 'M' || s[0] == 'S')
        {
            num_steps += abs(position-1);
            position = 1;
        }
        else if (s[0] == 'D' || s[0] == 'G' || s[0] == 'J' || s[0] == 'K' || s[0] == 'T' || s[0] == 'W')
        {
            num_steps += abs(position-2);
            position = 2;
        }
    }

    cout << num_steps << endl;

    return 0;
}
