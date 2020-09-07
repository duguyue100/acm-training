// UVa 12195 Jingle Composing

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    map<char, double> t;
    t['W'] = 1.0;
    t['H'] = 1.0/2.0;
    t['Q'] = 1.0/4.0;
    t['E'] = 1.0/8.0;
    t['S'] = 1.0/16.0;
    t['T'] = 1.0/32.0;
    t['X'] = 1.0/64.0;
    

    while (getline(cin, line) && line != "*")
    {
        int count = 0;
        for (size_t i=1; i<line.size(); i++)
        {
            double sum = 0;

            while (line[i] != '/')
            {
                sum += t[line[i]];
                i++;
            }

            if (sum == 1) count ++;

        }

        cout << count << endl;
    }

    return 0;
}
