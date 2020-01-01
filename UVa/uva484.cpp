// UVa 484 The Department of Redundancy Department

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <unordered_map>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    unordered_map<int, int> num_pair;
    deque<int> unique_nums;

    while (cin >> n)
    {
        if (!num_pair.count(n))
        {
            num_pair[n] = 1;
            unique_nums.push_back(n);
        }
        else num_pair[n]++;
    }

    for (int i; i<unique_nums.size(); i++)
    {
        cout << unique_nums[i] << " " << num_pair[unique_nums[i]] << endl;
    }

    return 0;
}
