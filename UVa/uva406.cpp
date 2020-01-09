// UVa 406 Prime Cuts

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
        if (!(n%i) || !(n%(i+2))) return false;

    return true;
}


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n, c;

    vector<int> primes;

    for (int i = 1; i<=1001; i++)
    {
        if (is_prime(i)) primes.push_back(i);
    }

    while (cin >> n >> c)
    {
        deque<int> ps;
        for (int i=0; i<primes.size(); i++)
            if (primes[i] <= n) ps.push_back(primes[i]);
            else break;
        
        if (ps.size() % 2 == 0)
        {
            while(ps.size() > c*2)
            {
                ps.pop_front(); ps.pop_back();
            }
        }
        else
        {
            while (ps.size() > (c*2-1))
            {
                ps.pop_front(); ps.pop_back();
            }
        }

        cout << n << " " << c << ":";

        while (!ps.empty())
        {
            cout << " " << ps.front();
            ps.pop_front();
        }

        cout << endl << endl;
    }

    return 0;
}
