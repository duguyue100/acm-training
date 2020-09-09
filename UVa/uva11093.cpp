// UVa 11093 Just Finish it up

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << ": ";

        int a[100002] = {0};
        int b[100002] = {0};

        int N; cin >> N;

        int sum_a = 0, sum_b = 0;
        for (int i=0; i<N; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }

        for (int i=0; i<N; i++)
        {
            cin >> b[i];
            sum_b += b[i];
        }

        if (sum_a < sum_b)
        {
            cout << "Not possible" << endl;
        }
        else
        {
            cout << "Possible from station ";

            // same value
            bool flag_eq = true;
            for (int i=0; i<N; i++)
            {
                if (a[i] != b[i])
                {
                    flag_eq = false;
                    break;
                }
            }

            if (flag_eq) cout << 1 << endl;
            else
            {
                int station = 0;
                for (int i=0; i<N; i++)
                {
                    if (a[i]>b[i])
                    {
                        bool flag = true;

                        int s_a = 0, s_b = 0;
                        for (int j=i; j<N+i-1; j++)
                        {
                            int idx = j%N;

                            s_a += a[idx]; s_b += b[idx];
                            if (s_a < s_b)
                            {
                                flag = false;
                                break;
                            }
                        }
                        
                        if (flag == true)
                        {
                            // possible roll back
                            while (a[i-1] == b[i-1])
                                i--;
                            station = i;
                            break;
                        }
                    }
                }
                
                cout << station+1 << endl;
            }
        }
    }

    return 0;
}
