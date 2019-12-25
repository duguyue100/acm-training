// Uva 11661 Burger Time?

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n = 0;

    while (cin >> n)
    {
        cin.ignore();
        if (n == 0) break;
        
        int min_dist = 2000001;
        int curr_dist = 0;
        char flag = 'F';
        char start_symbol = 'N';

        for (int i=0; i<n; i++)
        {
            char c = getchar();

            if (c == 'Z')
            {
                min_dist = 0;
                continue;
            }

            if (c == 'R')
            {
                if (flag == 'F' && start_symbol == 'N')
                {
                    flag = 'T';
                    start_symbol = 'R';
                }

                if (flag == 'T' && start_symbol == 'R') curr_dist = 0;

                // pair
                if (flag == 'T' && start_symbol == 'D')
                {
                    flag = 'E';
                    start_symbol = 'R';
                    curr_dist++;
                }
            }
            else if (c == 'D')
            {
                if (flag == 'F' && start_symbol == 'N')
                {
                    flag = 'T';
                    start_symbol = 'D';
                }

                if (flag == 'T' && start_symbol == 'D') curr_dist = 0;

                // pair
                if (flag == 'T' && start_symbol == 'R')
                {
                    flag = 'E';
                    start_symbol = 'D';
                    curr_dist++;
                }
            }
            else if (c == '.' && flag == 'T') curr_dist++;

            // reset
            if (flag == 'E')
            {
                if (curr_dist < min_dist)
                {
                    min_dist = curr_dist;
                }
                flag = 'T';
                curr_dist = 0;
            }

        }

        // print the minimal distance found
        cout << min_dist << endl;

    }
}
