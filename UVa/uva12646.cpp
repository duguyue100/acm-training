// UVa 12646 Zero or One

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int a = 0, b = 0, c=0;

    while (cin >> a >> b >> c)
    {
        if ((a==0 && b==1 && c==1) || (a==1 && b==0 && c==0))
            cout << "A" << endl;
        else if ((a==1 && b==0 && c==1) || (a==0 && b==1 && c==0))
            cout << "B" << endl;
        else if ((a==1 && b==1 && c==0) || (a==0 && b==0 && c==1))
            cout << "C" << endl;
        else
            cout << "*" << endl;
    }

    return 0;
}
