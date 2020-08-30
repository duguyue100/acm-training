// UVa 740 Baudot Data Communication Code

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string ds; getline(cin, ds);
    string us; getline(cin, us);

    string line;

    while (getline(cin, line))
    {
        bool flag=true;

        for (size_t i=0; i<line.size(); i+=5)
        {
            string c = line.substr(i, 5);
            bitset<5> ch = bitset<5>(c);
            size_t idx = (size_t)ch.to_ulong();

            if (idx == 31)
            {
                flag = false;
            }
            else if (idx == 27)
            {
                flag = true;
            }
            else
            {
                if (flag == true)
                    cout << ds[idx];
                else
                    cout << us[idx];
            }
        }

        cout << endl;
    }

    return 0;
}
