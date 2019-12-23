// UVa 11586 Train Tracks

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n_cases = 0;
    cin >> n_cases;

    for (int k=0; k<n_cases+1; k++)
    {
        int m = 0, f=0;
        string blocks = "";

        getline(cin, blocks);

        if (blocks.size() == 0) continue;

        if (blocks.size() == 2)
        {
            cout << "NO LOOP" << endl;
            continue;
        }

        for(string::size_type i = 0; i < blocks.size(); ++i) {
            if (blocks[i] == 'F') f++;
            else if (blocks[i] == 'M') m++;
        }

        if (m==f) cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;
    }

}
