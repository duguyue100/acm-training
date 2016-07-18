#include<iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    cin >> a >> b >> c;

    if (b == 0 || b == 1 || c == 1 || c == 0)
    {
        cout << a-b-c << endl;
    }
    else cout << a-b*c << endl;

    return 0;
}
