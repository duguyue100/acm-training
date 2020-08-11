// UVa 12614 Earn For Future!

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <bitset>
#include <vector>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T = 0;
    cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << ": ";

        int n = 0;
        cin >> n;

        vector<bitset<32> > a;

        for (int i=0; i<n; i++)
        {
            int c;
            cin >> c;

            a.push_back(bitset<32>(c));
        }

        for (int i=31; i>=0; i--)
        {
            int count = 0;
            
            for (int j=0; j<a.size(); j++)
                if (a[j][i] == 1)
                    count++;

            if (count >= 1)
            {
                vector<bitset<32> > b;

                while (!a.empty())
                {
                    if (a.back()[i] == 1)
                        b.push_back(a.back());
                    a.pop_back();
                }

                while (!b.empty())
                {
                    a.push_back(b.back());
                    b.pop_back();
                }
            }
        }

        // search for the highest bit
        bitset<32> sum_set = bitset<32>().set();
        while (!a.empty())
        {
            sum_set = (sum_set & a.back());
            a.pop_back();
        }

        cout << sum_set.to_ulong() << endl;
    }

    return 0;
}
