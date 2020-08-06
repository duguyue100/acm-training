// UVa 10260 Soundex

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <map>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    while (true)
    {
        string word;
        cin >> word;

        if (word.empty()) break;

        int curr = 0, prev = 0;
        for (int i=0; i<word.size(); i++)
        {
            switch(word[i])
            {
                case 'B':
                case 'F':
                case 'P':
                case 'V': curr = 1; break;
                case 'C':
                case 'G':
                case 'J':
                case 'K':
                case 'Q':
                case 'S':
                case 'X':
                case 'Z': curr = 2; break;
                case 'D':
                case 'T': curr = 3; break;
                case 'L': curr = 4; break;
                case 'M':
                case 'N': curr = 5; break;
                case 'R': curr = 6; break;
                default: curr = 7; break;
            }

            if (curr != prev && curr != 7)
            {
                cout << curr;
                prev = curr;
            }
            else if (curr == 7) prev = 0;
            // else prev = 0;
        }
        cout << endl;
    }

    return 0;
}
