// UVa 10487 Closest Sums

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;
    int cases = 1;

    while (cin >> N)
    {
        if (N == 0) break;
        cout << "Case " << cases << ":" << endl;

        vector<int> numbers;
        for (int i=0; i<N; i++)
        {
            int num; cin >> num;
            numbers.push_back(num);
        }

        vector<int> sums;
        for (size_t i=0; i<numbers.size()-1; i++)
        {
            for (size_t j=i+1; j<numbers.size(); j++)
            {
                sums.push_back(numbers[i]+numbers[j]);
            }
        }

        sort(sums.begin(), sums.end());

        // find our number;
        int M; cin >> M;

        for (int m=0; m<M; m++)
        {
            int q; cin >> q;
            
            int min_val = abs(q-sums[0]);
            int val = sums[0];
            for (int i=1; i<sums.size(); i++)
            {
                if (min_val > abs(q-sums[i]))
                {
                    min_val = abs(q-sums[i]);
                    val = sums[i];
                }
            }

            cout << "Closest sum to " << q << " is " << val << "." << endl;
        }
        
        cases++;
    }

    return 0;

}
