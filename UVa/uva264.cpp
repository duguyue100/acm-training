// UVa 264 Count on Cantor

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;
    
    while (cin >> N)
    {
        int line = (int)(round(sqrt((double)N*2)));

        int max_num = (line+1)*line/2;

        int diff = max_num-N;
        int row = 0;
        int col = 0;
        if (line % 2)
        {
            // odd
            row = 1+diff;
            col = line-diff;
        }
        else
        {
            // even
            row = line-diff;
            col = 1+diff;
        }

        cout << "TERM " << N << " IS " << row << "/" << col << endl;
    }


    return 0;
}
