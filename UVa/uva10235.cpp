// UVa 10235 Simply Emirp

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
#include <bitset>

using namespace std;

bool is_prime(long n)
{
    if (n<=3) return true;
    if (!(n%2) || !(n%3)) return false;

    for (long i=5; i*i<=n; i+=6)
        if (!(n%i) || !(n%(i+2))) return false;

    return true;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    long n;

    while (cin >> n)
    {
        if (!is_prime(n))
        {
            cout << n << " is not prime." << endl;
            continue;
        }

        string r_n = to_string(n);
        string new_n = "";
        for (int i=r_n.size()-1; i>=0; i--)
            new_n += r_n[i];

        if (is_prime(stoi(new_n)) && r_n != new_n)
            cout << n << " is emirp." << endl;
        else
            cout << n << " is prime." << endl;
    }

    return 0;
}
