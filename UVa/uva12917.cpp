// UVa 12917 Prop hunt!

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int p=0, h=0, o=0;

    while (cin >> p >> h >> o)
    {
        if (o-p>=h)
            cout << "Props win!" << endl;
        else
            cout << "Hunters win!" << endl;
    }

    return 0;
}
