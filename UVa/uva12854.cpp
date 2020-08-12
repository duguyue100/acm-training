// UVa 12854 Automated Checking Machine

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int a[5]={};
    int b[5]={};

    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> b[0] >> b[1] >> b[2] >> b[3] >> b[4])
    {
        bool flag = true;
        for (int i=0; i<5; i++)
        {
            if (a[i]^b[i] == false)
            {
                flag = false;
                break;
            }
        }
        if (flag) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    

    return 0;
}
