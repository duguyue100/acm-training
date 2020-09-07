// UVa 11743 Credit Check

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        string line = "";
        string temp;
        cin >> temp; line += temp;
        cin >> temp; line += temp;
        cin >> temp; line += temp;
        cin >> temp; line += temp;
        
        int double_sum = 0;
        for (size_t i=0; i<line.size(); i+=2)
        {
            int ddigit = (2*(line[i]-'0'));
            double_sum += (ddigit/10+ddigit%10);
        }

        int sum = 0;
        for (size_t i=1; i<line.size(); i+=2)
        {
            sum += (line[i]-'0');
        }

        if ((double_sum+sum) % 10 == 0)
            cout << "Valid" << endl;
        else cout << "Invalid" << endl;
    }

    return 0;
}
