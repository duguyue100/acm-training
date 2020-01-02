// UVa 572 Oil Deposits

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

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int m, n;

    while (true)
    {
        cin >> m >> n;
        if (m == 0 || n == 0) break;
        cin.ignore();

        char grid[m+2][n+2];
        
        string line;
        for (int i=1; i<=m; i++)
        {
            getline(cin, line);
            for (int j=1; j<=n; j++)
                grid[i][j] = line[j-1];
        }

        int num_deposit = 0;
        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=n; j++)
            {
                // start searching process
                if (grid[i][j] == '@')
                {
                    num_deposit++;

                    // iteratively remove all related blocks
                    stack<pair<int, int> > related;
                    related.push(make_pair(i, j));
                    
                    while(!related.empty())
                    {
                        pair<int, int> curr_pair = related.top();
                        related.pop();

                        if (grid[curr_pair.first][curr_pair.second] == '@')
                        {
                            grid[curr_pair.first][curr_pair.second] = '*';

                            if (grid[curr_pair.first-1][curr_pair.second] == '@')
                                related.push(make_pair(curr_pair.first-1, curr_pair.second));
                            if (grid[curr_pair.first+1][curr_pair.second] == '@')
                                related.push(make_pair(curr_pair.first+1, curr_pair.second));
                            if (grid[curr_pair.first][curr_pair.second-1] == '@')
                                related.push(make_pair(curr_pair.first, curr_pair.second-1));
                            if (grid[curr_pair.first][curr_pair.second+1] == '@')
                                related.push(make_pair(curr_pair.first, curr_pair.second+1));
                            if (grid[curr_pair.first-1][curr_pair.second-1] == '@')
                                related.push(make_pair(curr_pair.first-1, curr_pair.second-1));
                            if (grid[curr_pair.first+1][curr_pair.second-1] == '@')
                                related.push(make_pair(curr_pair.first+1, curr_pair.second-1));
                            if (grid[curr_pair.first-1][curr_pair.second+1] == '@')
                                related.push(make_pair(curr_pair.first-1, curr_pair.second+1));
                            if (grid[curr_pair.first+1][curr_pair.second+1] == '@')
                                related.push(make_pair(curr_pair.first+1, curr_pair.second+1));
                        }
                    }

                }
            }
        }

        cout << num_deposit << endl;
    }

    return 0;
}
