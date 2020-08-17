// UVa 11988 Broken Keyboard (a.k.a. Beiju Text)

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;
    
    while (getline(cin, line))
    {
        deque<char> final_text;
        deque<char>::iterator insert_pos = final_text.begin();
        for (size_t i=0; i<line.size(); i++)
        {
            if (line[i] == '[')
            {
                insert_pos = final_text.begin();
            }
            else if (line[i] == ']')
            {
                insert_pos = final_text.end();
            }
            else
            {
                insert_pos = final_text.insert(insert_pos, line[i]);
                insert_pos++;
            }
        }

        for (size_t i=0; i<final_text.size(); i++)
        {
            cout << final_text[i];
        }
        cout << endl;
    }

}
