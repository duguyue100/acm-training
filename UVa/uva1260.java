// UVa 1260 Sales

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        int N; cin >> N;

        int a[1001] = {0};
        int b[1001] = {0};
        
        for (int i=0; i<N; i++) cin >> a[i];

        for (int i=1; i<N; i++)
        {
            for (int j=0; j<i; j++)
            {
                if (a[j] <= a[i])
                    b[i] ++;
            }
        }

        int sum = 0;
        for (int i=1; i<N; i++) sum += b[i];

        cout << sum << endl;
    }

    return 0;
}
