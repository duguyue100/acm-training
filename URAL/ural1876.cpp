#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int sum1=80+(b-40)*2+40;
    int sum2=78+(a-40)*2+41;

    if (sum1>sum2) cout << sum1;
    else cout << sum2;


    return 0;
}
