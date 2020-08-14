// UVa 855 Lunch in Grid City

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

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        int S, A, F; cin >> S >> A >> F;

        vector<int> street, avenue;
        for (int i=0; i<F; i++)
        {
            int s, a; cin >> s >> a;
            
            street.push_back(s);
            avenue.push_back(a);
        }

        sort(street.begin(), street.end());
        sort(avenue.begin(), avenue.end());

        cout << "(Street: " << street[(street.size()-1)/2] << ", Avenue: " << avenue[(avenue.size()-1)/2] << ")" << endl;

    }

    return 0;
}
