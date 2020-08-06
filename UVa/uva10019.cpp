// UVa 10019 Funny Encryption Method

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        int number; cin >> number;

        int decimal = number;
        int sum = 0;
        while (decimal != 0)
        {
            if (decimal % 2 == 1) sum++;
            decimal /= 2;
        }

        cout << sum << " ";

        stringstream s;
        s << number;
        int hex_num;
        s >> hex >> hex_num;

        sum = 0;
        while (hex_num != 0)
        {
            if (hex_num % 2 == 1) sum++;
            hex_num /= 2;
        }
        cout << sum << endl;
    
    }

    return 0;
}
