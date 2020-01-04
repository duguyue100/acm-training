// UVa 482 Permutation Arrays

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

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n_case;
    cin >> n_case;
    cin.ignore();

    for (int i=1; i<=n_case; i++)
    {
        char c;
        deque<int> idx;
        while((c=getchar()) != '\n') {};

        // read index
        string curr_str = "";
        while(true)
        {
            c = getchar();

            if (c == ' ' || c == '\n')
            {
                int curr_idx = stoi(curr_str);
                idx.push_back(curr_idx);
                curr_str = "";
            }
            else curr_str += c;

            if (c == '\n') break;

        }

        string content[idx.size()];
        int id = 0;
        while(true)
        {
            c = getchar();

            if (c == ' ' || c == '\n')
            {
                content[idx.at(id)-1] = curr_str;
                id++;
                curr_str = "";
            }
            else curr_str += c;

            if (c == '\n') break;
        }

        // print stuff
        for (auto num: content)
            cout << num << endl;
        if (i != n_case)
            cout << endl;
    }

    return 0;
}
