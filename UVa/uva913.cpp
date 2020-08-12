// 913 Joana and the Odd Numbers

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    unsigned long long N;
    
    while (cin >> N)
    {
        unsigned long long result = (((N+1)/2)*((N+1)/2)*2-1)*3-6;

        cout << result << endl;
    }


    return 0;
}
