// UVa 12662 Good Teacher

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n; cin >> n;

    string a[102];

    a[0] = ""; a[n+1] = "";
    for (int i=1; i<=n; i++) cin >> a[i];

    int q; cin >> q;

    for (int i = 0; i<q; i++)
    {
        int pos; cin >> pos;

        if (a[pos] != "?")
            cout << a[pos] << endl;
        else
        {
            int left_len = 0;
            int right_len = 0;

            int curr_pos = pos;
            string left_c = a[curr_pos-1];
            while (a[curr_pos-1] == "?")
            {
                curr_pos --;
                left_len ++;
                left_c = a[curr_pos-1];
            }

            curr_pos = pos;
            string right_c = a[curr_pos+1];
            while (a[curr_pos+1] == "?")
            {
                curr_pos ++;
                right_len ++;
                right_c = a[curr_pos+1];
            }

            if (left_c == "") left_len = 200;
            if (right_c == "") right_len = 200;

            if (left_len == right_len)
            {
                cout << "middle of " << left_c << " and " << right_c << endl;
            }
            else if (left_len < right_len)
            {
                for (int k=0; k<=left_len; k++)
                {
                    cout << "right of ";
                }
                cout << left_c << endl;
            }
            else if (left_len > right_len)
            {
                for (int k=0; k<=right_len; k++)
                {
                    cout << "left of ";
                }
                cout << right_c << endl;
            }
        }
    }

    return 0;
}
