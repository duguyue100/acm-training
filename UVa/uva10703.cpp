// UVa 10703 Free spots

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int W, H, N;

    while (cin >> W >> H >> N)
    {
        if (W==0 && H==0 && N==0) break;

        bool map[501][501]={0};

        for (int i=0; i<N; i++)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            int minx = min(x1, x2);
            int maxx = max(x1, x2);
            int miny = min(y1, y2);
            int maxy = max(y1, y2);

            for (int j=minx; j<=maxx; j++)
            {
                for (int k=miny; k<=maxy; k++)
                {
                    map[k][j] = true;
                }
            }
        }

        int sum=0;
        for (int j=1; j<=W; j++)
            for (int k=1; k<=H; k++)
                if (map[k][j] == false)
                    sum ++;

        if (sum == 0)
        {
            cout << "There is no empty spots." << endl;
        }
        else if (sum == 1)
        {
            cout << "There is one empty spot." << endl;
        }
        else
        {
            cout << "There are " << sum << " empty spots." << endl;
        }
    }

    return 0;
}
