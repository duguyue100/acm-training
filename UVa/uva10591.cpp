// UVa 10591 Happy Number

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


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n; cin >> n;

    for (int i=1; i<=n; i++)
    {
        string m;
        cin >> m;

        string candidate = m;

        bool flag = false;
        while (true)
        {
            int sum = 0;

            for (int i=0; i<candidate.size(); i++)
                sum += (candidate[i]-'0')*(candidate[i]-'0');
            
            candidate = to_string(sum);

            if (candidate == "1")
            {
                flag = true; break;
            }
            
            if (candidate == m || sum <= 4)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
            cout << "Case #" << i << ": " << m << " is a Happy number." << endl;
        else
            cout << "Case #" << i << ": " << m << " is an Unhappy number." << endl;
    }

    return 0;
}
