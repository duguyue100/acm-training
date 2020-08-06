// UVa 1585 Score

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

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    cin >> n;
    for (int i=1; i<=n; i++)
    {
        string scores; cin >> scores;

        int sum = 0, temp_sum = 0;
        for (int j=0; j<scores.size(); j++)
        {
            if (scores[j] == 'X')
            {
                temp_sum = 0;
            }
            else if (scores[j] == 'O')
            {
                temp_sum ++;
                sum += temp_sum;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
