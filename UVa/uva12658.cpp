// UVa 12658 Character Recognition?

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;

    string line1 = "", line2 = "";

    // get first needed line
    getline(cin, line1);
    getline(cin, line1);
    getline(cin, line1);

    // get second needed line
    getline(cin, line2);
    getline(cin, line2);

    for (int i=0; i<n; i++)
    {
        if (line1[i*4+1]=='*') cout << 1;
        if ((line1[i*4+2]=='*') and (line2[i*4]=='*')) cout << 2;
        if ((line1[i*4+2]=='*') and (line2[i*4+2]=='*')) cout << 3;
    }
    cout << endl; 

    return 0;
}
