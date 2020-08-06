// UVa 10924 Prime Words

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>
#include <map>
#include <algorithm>
#include <utility>
#include <stack>
#include <tuple>
#include <cmath>
#include <vector>

using namespace std;


bool is_prime(int n)
{
    if (n<=3) return true;
    if (!(n%2) || !(n%3)) return false;

    for (int i=5; i*i<=n; i+=6)
    {
        if (!(n%i) || !(n%(i+2))) return false;
    }

    return true;
}


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string number;

    while (cin >> number)
    {
        int sum = 0;

        for (int i=0; i<number.size(); i++)
        {
            if (number[i] >= 'a' && number[i] <= 'z')
                sum += number[i]-'a'+1;
            else if (number[i] >= 'A' && number[i] <= 'Z')
                sum += number[i]-'A'+27;
        }

        if (is_prime(sum))
        {
            cout << "It is a prime word." << endl;
        }
        else cout << "It is not a prime word." << endl;
    }

    return 0;
}
