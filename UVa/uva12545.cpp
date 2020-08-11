// UVa 12545 Bits Equalizer

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int C;
    cin >> C;

    for (int t=1; t<=C; t++)
    {
        cout << "Case " << t << ": ";
        string l1, l2;
        cin >> l1 >> l2;

        int num_10=0, num_11=0, num_1q=0;
        int num_20=0, num_21=0;
        
        for (size_t i=0; i<l1.size(); i++)
        {
            if (l1[i]=='0') num_10++;
            else if (l1[i]=='1') num_11++;
            else if (l1[i]=='?') num_1q++;

            if (l2[i]=='0') num_20++;
            else if (l2[i]=='1') num_21++;
        }

        if ((num_10+num_1q) < num_20)
        {
            cout << -1 << endl;
            continue;
        }

        // if valid
        string trim1="", trim2="";
        for (size_t i=0; i<l1.size(); i++)
        {
            if (l1[i] != l2[i])
            {
                trim1 += l1[i];
                trim2 += l2[i];
            }
        }

        int sum_op = 0;
        // direct swap
        int n10=0, n01=0;
        for (size_t i=0; i<trim1.size(); i++)
        {
            if (trim1[i]=='0' && trim2[i]=='1')
                n01++;
            else if (trim1[i] == '1' && trim2[i] == '0')
                n10++;
        }

        sum_op += min(n10, n01);

        int residual = max(n10, n01)-min(n10, n01);

        // consider ?
        cout << sum_op + residual + num_1q << endl;
    }

    return 0;
}
