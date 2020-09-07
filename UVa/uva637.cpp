// UVa 637 Booklet Printing

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    while (cin >> n && n != 0)
    {
        cout << "Printing order for " << n << " pages:" << endl;
        int n_pages = (int)ceil((double)n/4.);

        int end_id = n_pages*4;
        int start_id = 1;
        for (int i=1; i<=n_pages; i++)
        {
            int f_l = end_id;
            int f_r = start_id;
            
            int b_r = f_l - 1;
            int b_l = f_r + 1;

            if (!(f_l > n && f_r > n))
            {
                cout << "Sheet " << i << ", front: ";
                if (f_l > n) cout << "Blank, ";
                else cout << f_l << ", ";

                if (f_r > n) cout << "Blank" << endl;
                else cout << f_r << endl;
            }

            if (!(b_l > n && b_r > n))
            {
                cout << "Sheet " << i << ", back : ";
                if (b_l > n) cout << "Blank, ";
                else cout << b_l << ", ";

                if (b_r > n) cout << "Blank" << endl;
                else cout << b_r << endl;
            }

            start_id += 2;
            end_id -= 2;
        }
    }

    return 0;
}
