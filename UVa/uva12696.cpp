// UVa 12696 Cabin Baggage

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;

    int num_allowed = 0;
    for (int i = 0; i<n; i++)
    {
        double l=0, w=0, d=0, weight=0;
        cin >> l >> w >> d >> weight;

        int li=(int)(l*100);
        int wi=(int)(w*100);
        int di=(int)(d*100);
        int weighti=(int)(weight*100);

        if ((((li>5600) or (wi>4500) or (di>2500)) and ((li+wi+di)>12500)) or (weighti>700))
            cout << 0;
        else
        {
            cout << 1;
            num_allowed ++;
        }
        cout << endl;
    }
    cout << num_allowed << endl;

    return 0;
}
