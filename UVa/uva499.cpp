// UVa 499 What’s The Frequency, Kenneth?

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string text;
    while(getline(cin, text))
    {
        map<char, int> chars;

        int max = 0;

        for (int i=0; i<text.size(); i++)
        {
            if (isalpha(text[i]))
            {
                if (!chars.count(text[i]))
                {
                    chars[text[i]] = 1;
                }
                else chars[text[i]] ++;

                if (chars[text[i]] > max) max=chars[text[i]];
            }
        }

        if (max==0)
        {
            cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz 0" << endl;
        }
        else
        {
            for (std::map<char,int>::iterator it=chars.begin(); it!=chars.end(); ++it)
                if (it->second == max)
                    cout << it->first;
            cout << " " << max << endl;
        }
    }

    return 0;
}
