// UVa 12959 Strategy Game

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int J, R;
    
    while (cin >> J >> R)
    {
        int a[501] = {0};
        
        for (int i=0; i<R; i++)
        {
            for (int j=1; j<=J; j++)
            {
                int p; cin >> p;
                a[j] += p;
            }
        }

        int max = -1;
        int argmax = -1;
        for (int i=1; i<=J; i++)
        {
            if (a[i] >= max)
            {
                max = a[i];
                argmax = i;
            }
        }

        cout << argmax << endl;
    }
    

    return 0;
}
