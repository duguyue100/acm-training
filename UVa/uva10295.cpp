// UVA 10295 Hay Points

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int M, N;
    cin >> M >> N;

    map<string, int> m;
    for (int i=0; i<M; i++)
    {
        string word; cin >> word;
        int val; cin >> val;
        m[word] = val;
    }
    
    string w;

    int sum = 0;
    while (cin >> w)
    {
        if (w == ".")
        {
            cout << sum << endl;
            sum = 0;
        }

        sum += m[w];
    }

    return 0;
}
