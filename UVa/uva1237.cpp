// UVa 1237 Expert Enough?

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T;
    cin >> T;

    for (int t=1; t<=T; t++)
    {
        int D;
        cin >> D;
        
        int a[1000001]={0};
        string n[10001];
        
        int idx = 1;
        
        for (int i=0; i<D; i++)
        {
            string name="";
            int l, h;
            cin >> name >> l >> h;

            n[idx] = name;
            
            for (int j=l; j<=h; j++)
            {
                if (a[j] == 0) a[j] = idx;
                else a[j] = -1;
            }

            idx ++;
        }

        int Q;
        cin >> Q;

        for (int i=0; i<Q; i++)
        {
            int p;
            cin >> p;

            if (a[p] == 0 || a[p] == -1)
                cout << "UNDETERMINED" << endl;
            else cout << n[a[p]] << endl;
        }

        if (t != T) cout << endl;
    }

    return 0;
}
