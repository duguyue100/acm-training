// UVa 686 Goldbach's Conjecture (II)

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


bool is_prime(int n)
{
    if (n<=3) return true;
    if (!(n%2) || !(n%3)) return false;

    for (int i=5; i*i<=n; i+=6)
        if (!(n%i) || !(n%(i+2))) return false;

    return true;
}


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    vector<int> primes;
    bitset<33000> prime_list(0);

    for (int i = 2; i<=33000; i++)
    {
        if (is_prime(i))
        {
            primes.push_back(i);
            prime_list.set(i);
        }
    }

    while (cin >> n)
    {
        if (n == 0) break;

        int idx = 0;
        int sum = 0;
        while (primes[idx] <= n/2)
        {
            if (prime_list[n-primes[idx]])
                sum++;
            idx ++;
        }

        cout << sum << endl;
    }

    return 0;
}
