// UVa 1588 Kickdown

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line1, line2;

    while (cin >> line1 >> line2)
    {
        if (line1.size() < line2.size())
        {
            swap(line1, line2);
        }

        size_t lin1_l = line1.size();
        size_t lin2_l = line2.size();

        string padding(line2.size()-1, '0');
        line1 = padding+line1+padding;

        int min_len = lin1_l+lin2_l;
        for (size_t i=0; i<lin1_l+lin2_l-1; i++)
        {
            int flag = true;
            for (size_t j=0; j<lin2_l; j++)
            {
                if ((line2[j]-'0')+(line1[i+j]-'0') > 3)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                int len = 0; 
                // output length
                if (i >= lin2_l-1 && i<= lin1_l-1)
                {
                    len = lin1_l;
                    min_len = len;
                    break;
                }
                else if (i<lin2_l-1)
                {
                    len = lin1_l+lin2_l-1-i;
                }
                else if (i>lin1_l-2)
                {
                    len = i+1;
                }

                if (min_len > len)
                {
                    min_len = len;
                }
            }
        }

        cout << min_len << endl;
    }

    return 0;
}
