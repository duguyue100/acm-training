// UVA 12626 I Love Pizza

#include <bits/stdc++.h>

using namespace std;

bool check(int a[6], int b[6])
{
    for (int i=0; i<6; i++)
    {
        if (a[i]-b[i] < 0)
            return false;
    }

    return true;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    int T; cin >> T;

    string line;
    getline(cin, line);

    int b[6] = {1, 3, 2, 1, 1, 1};
    while (getline(cin, line))
    {
        int a[6] = {0};

        for (size_t i=0; i<line.size(); i++)
        {
            switch (line[i])
            {
                case 'M': a[0]++; break;
                case 'A': a[1]++; break;
                case 'R': a[2]++; break;
                case 'G': a[3]++; break;
                case 'I': a[4]++; break;
                case 'T': a[5]++; break;
            }
        }

        int sum = 0;

        while (check(a, b))
        {
            for (int i=0; i<6; i++)
            {
                a[i] -= b[i];
            }
            sum ++;
        }

        cout << sum << endl; 
    }

    return 0;
}
