// UVa 12356 Army buddies

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int S, B;
    map<int, int> line;
    
    while (cin >> S >> B)
    {
        if (S==0 && B==0) break;

        for (int i=0; i<=S+1; i++) line[i] = i;

        int l, r;
        map<int, int>::iterator low, up;
        for (int i=0; i<B; i++)
        {
            cin >> l >> r;
            low = line.lower_bound(l);
            up = line.upper_bound(r);

            --low;

            if (low->first != 0) cout << low->first << " ";
            else cout << "* ";

            if (up->first != S+1) cout << up->first;
            else cout << "*";

            ++low;
            line.erase(low, up);

            cout << endl;
        }

        cout << "-" << endl;

    }


    return 0;
}
