// UVa 13026 Search the Khoj

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T;
    cin >> T;

    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << ":" << endl;

        string book[1001];

        int N;
        cin >> N;
        
        for (int i=0; i<N; i++)
            cin >> book[i];

        string my_name = "";
        cin >> my_name;

        // searching for results
        for (int i=0; i<N; i++)
        {
            int count = 0;
            for (size_t j=0; j<book[i].size(); j++)
            {
                if (book[i][j] != my_name[j])
                    count++;
            }
            if (count <= 1) cout << book[i] << endl;
        }
        
    }

    return 0;
}
