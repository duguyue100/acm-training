// UVa 540 Team Queue

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

    int t;
    int s = 1;

    while (cin >> t)
    {
        if (t == 0) break;

        cout << "Scenario #" << s << endl;
        
        map<long, long> elements;

        for (int i=0; i<t; i++)
        {
            int m; cin >> m;
            for (int j=0; j<m; j++)
            {
                long e; cin >> e;

                elements[e] = i;
            }
        }


        string command;
        long e;

        bool q_appear[1010] = {0};
        vector<int> q_order;

        vector<queue<long> > q;
        for (int i=0; i<t; i++)
        {
            queue<long> empty_q;
            q.push_back(empty_q);
        }

        while (cin >> command)
        {
            if (command == "STOP") break;

            if (command == "ENQUEUE")
            {
                cin >> e;
                q[elements[e]].push(e);
               
                if (q_appear[elements[e]] == false)
                {
                    q_appear[elements[e]] = true;
                    q_order.push_back(elements[e]);            
                }
            }
            else if (command == "DEQUEUE")
            {
                size_t i = 0;
                while (q[q_order[i]].empty())
                {
                    i++;
                }

                if (i < q_order.size())
                {
                    cout << q[q_order[i]].front() << endl;
                    q[q_order[i]].pop();

                    if (q[q_order[i]].empty())
                    {
                        q_appear[q_order[i]] = false;
                        q_order.erase(q_order.begin()+i);
                    }
                }
            }

       }

        s++;
        cout << endl;
    }

    return 0;

}
