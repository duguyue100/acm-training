// UVa 665 False coin

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <tuple>
#include <set>

using namespace std;

int check(bool coin[101], int N)
{
    int non_zero = 0;
    for (int i=1; i<=N; i++)
    {
        if (coin[i] == false) non_zero++;
    }

    if (non_zero == 0 || non_zero > 1)
        return 0;
    
    for (int i=1; i<=N; i++)
    {
        if (coin[i] == false)
            return i;
    }
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int M;
    cin >> M;

    for (int m=0; m<M; m++)
    {
        int N, K; cin >> N >> K;

        bool l_coin[101];
        bool h_coin[101];

        for (int i=1; i<=N; i++)
        {
            l_coin[i] = false;
            h_coin[i] = false;
        }

        bool l_flag = true;
        bool h_flag = true;
        for (int k=0; k<K; k++)
        {
            int p; cin >> p;
            int left[100] = {0};
            int right[100] = {0};

            for (int i=0; i<p; i++) cin >> left[i];
            for (int i=0; i<p; i++) cin >> right[i];

            char com; cin >> com;

            if (com == '=')
            {
                for (int i=0; i<p; i++)
                {
                    l_coin[left[i]] = true;
                    l_coin[right[i]] = true;
                    
                    h_coin[left[i]] = true;
                    h_coin[right[i]] = true;
                }
            }
            else if (com == '<')
            {
                for(int i=0; i<p; i++)
                {
                    h_coin[left[i]] = true;
                    l_coin[right[i]] = true;
                }

                bool flag_l = false;
                bool flag_h = false;
                for (int i=0; i<p; i++)
                {
                    if (h_coin[right[i]] == false)
                    {
                        flag_h = true;
                    }
                    if (l_coin[left[i]] == false)
                    {
                        flag_l = true;
                    }
                }
                if (flag_h == false) h_flag=false;
                if (flag_l == false) l_flag=false;

            }
            else if (com == '>')
            {
                for (int i=0; i<p; i++)
                {
                    h_coin[right[i]] = true;
                    l_coin[left[i]] = true;
                }

                bool flag_l = false;
                bool flag_h = false;
                for (int i=0; i<p; i++)
                {
                    if (h_coin[left[i]] == false)
                    {
                        flag_h = true;
                    }
                    if (l_coin[right[i]] == false)
                    {
                        flag_l = true;
                    }
                }
                if (flag_h == false) h_flag=false;
                if (flag_l == false) l_flag=false;
            }
        }

        if (N == 2)
        {
            cout << 0 << endl;
            if (m!=M-1) cout << endl;
            continue;
        }

        int l = check(l_coin, N)*l_flag;
        int h = check(h_coin, N)*h_flag;
        if (l || h)
        {
            if (l) cout << l << endl;
            else cout << h << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        if (m!=M-1)
            cout << endl;
    }


    return 0;
}
