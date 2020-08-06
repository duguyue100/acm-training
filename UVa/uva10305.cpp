// UVa 10305 Ordering Tasks

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

int visit[102] = {0};
vector<vector<int> > mapping;
stack<int> order;

void dfs(int i)
{
    visit[i] = 1;

    if (!mapping[i].empty())
    {
        for (int k=0; k<mapping[i].size(); k++)
        {
            if (visit[mapping[i][k]] == 0)
                dfs(mapping[i][k]);
        }
    }

    order.push(i);
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int m, n;

    while (cin >> m >> n)
    {
        if (m == 0 && n == 0) break;

        mapping = vector<vector<int> >();
        for (int i=1; i<=m; i++) visit[i] = 0;
        order = stack<int>();
        for (int i=1; i<=m+1; i++)
            mapping.push_back(vector<int>());

        for (int i=1; i<=n; i++)
        {
            int j, k;
            cin >> j >> k;
            mapping[j].push_back(k);
        }

        for (int i=1; i<=m; i++)
        {
            if (visit[i] == 0)
                dfs(i);
        }

        
        cout << order.top(); order.pop();
        while (!order.empty())
        {
            cout << " " << order.top();
            order.pop();
        }
        cout << endl; 
    }

    return 0;
}
