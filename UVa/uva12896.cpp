// UVa 12896 Mobile SMS

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    map<pair<int, int>, char> a;

    a[pair<int, int>(1, 1)] = '.';
    a[pair<int, int>(1, 2)] = ',';
    a[pair<int, int>(1, 3)] = '?';
    a[pair<int, int>(1, 4)] = '"';
    a[pair<int, int>(2, 1)] = 'a';
    a[pair<int, int>(2, 2)] = 'b';
    a[pair<int, int>(2, 3)] = 'c';
    a[pair<int, int>(3, 1)] = 'd';
    a[pair<int, int>(3, 2)] = 'e';
    a[pair<int, int>(3, 3)] = 'f';
    a[pair<int, int>(4, 1)] = 'g';
    a[pair<int, int>(4, 2)] = 'h';
    a[pair<int, int>(4, 3)] = 'i';
    a[pair<int, int>(5, 1)] = 'j';
    a[pair<int, int>(5, 2)] = 'k';
    a[pair<int, int>(5, 3)] = 'l';
    a[pair<int, int>(6, 1)] = 'm';
    a[pair<int, int>(6, 2)] = 'n';
    a[pair<int, int>(6, 3)] = 'o';
    a[pair<int, int>(7, 1)] = 'p';
    a[pair<int, int>(7, 2)] = 'q';
    a[pair<int, int>(7, 3)] = 'r';
    a[pair<int, int>(7, 4)] = 's';
    a[pair<int, int>(8, 1)] = 't';
    a[pair<int, int>(8, 2)] = 'u';
    a[pair<int, int>(8, 3)] = 'v';
    a[pair<int, int>(9, 1)] = 'w';
    a[pair<int, int>(9, 2)] = 'x';
    a[pair<int, int>(9, 3)] = 'y';
    a[pair<int, int>(9, 4)] = 'z';
    a[pair<int, int>(0, 1)] = ' ';

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        int L; cin >> L;
        int b1[101] = {0};
        int b2[101] = {0};

        for (int i=0; i<L; i++) cin >> b1[i];
        for (int i=0; i<L; i++) cin >> b2[i];

        for (int i=0; i<L; i++)
        {
            cout << a[pair<int, int>(b1[i], b2[i])];
        }
        cout << endl;
    }

    return 0;
}
