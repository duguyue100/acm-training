// UVa 10978 Let’s Play Magic!

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;

    while (cin >> N)
    {
        if (N == 0) break;

        string cards[53];
        string c, w;
        int curr_pos = 1;
        
        for (int i=1; i<=N; i++) cards[i] = "";

        for (int i=0; i<N; i++)
        {
            cin >> c >> w;

            int size_w = w.size();

            int n_pos = 1;
            int j = curr_pos;
            while (n_pos <= size_w)
            {
                j = (j%N) ? (j%N):N;
                if (cards[j] == "")
                    n_pos++;
                j++;
            }
            j--;

            int pos = (j%N) ? (j%N):N;

            cards[pos] = c;

            curr_pos = pos;
        }

        cout << cards[1];
        for (int i=2; i<=N; i++)
        {
            cout << " " << cards[i];
        }
        cout << endl;

    }

    return 0;
}
