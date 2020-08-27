// UVa 10878 Decode the tape

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    getline(cin, line);
    
    while (getline(cin, line))
    {
        if (line == "___________") break;

        line = line.erase(6, 1);

        bitset<7> number(0);
        for (int i=2; i<=8; i++)
        {
            if (line[8-i+2] == ' ')
                number[i-2] = false;
            else if  (line[8-i+2] == 'o')
                number[i-2] = true;
        }


        char ch = (char)number.to_ulong();
        cout << ch;
    }

    return 0;
}
