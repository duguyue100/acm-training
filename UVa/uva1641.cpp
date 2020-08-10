// UVa 1641 ASCII Area

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int h, w;

    while (cin >> h >> w)
    {
        string line = "";
        getline(cin, line);
        int border_size = 0;
        int empty_size = 0;
        for (int i=0; i<h; i++)
        {
            getline(cin, line);
            // consider border
            bool flag = false;
            bool in = false;
            for (size_t j=0; j<line.size(); j++)
            {
                if ((line[j] == '/') or (line[j] == '\\'))
                {
                    border_size++;
                    in = (in) ? false:true;
                }

                if ((in == true) and (line[j] == '.'))
                    empty_size ++;
            }
        }
        cout << border_size/2+empty_size << endl;
    }

    return 0;
}
