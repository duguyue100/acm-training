#include<iostream>

using namespace std;

int main(void)
{
    long a, b, c;

    cin >> a >> b >> c;

    if (a+b<c)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        if (c-a>0)
            cout << a << " " << c-a << endl;
        else
            cout << c << " " << 0 << endl;
    }

    return 0;
}
