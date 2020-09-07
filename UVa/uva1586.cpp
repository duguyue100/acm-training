// UVa 1586 Molar mass

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t1=1; t1<=T; t1++)
    {
        string line; cin >> line;

        double sum = 0;

        map<char, double> t;
        t['C'] = 12.01; t['H'] = 1.008; t['O']=16.00; t['N']=14.01;

        for (size_t i=0; i<line.size(); i++)
        {
            char e = line[i];

            string num = "";
            while (line[i+1] >= '0' && line[i+1] <= '9')
            {
                num += line[i+1];
                i++;
            }

            if (num != "")
                sum += t[e]*(double)stoi(num);
            else
                sum += t[e];
        }

        printf("%.3f\n", sum);
    }


    return 0;
}
