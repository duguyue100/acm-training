// UVa 10815 Andy’s First Dictionary

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string word;
    set<string> dict; 
    
    while (cin >> word)
    {
        string update_word="";
        for (int i=0; i<word.size(); i++)
        {
            if (isalpha(word[i]))
            {
                update_word += (word[i] >= 'A' && word[i] <= 'Z') ? tolower(word[i]):word[i];
            }
            else
            {
                if (update_word != "") dict.insert(update_word);
                update_word = "";
            }
        }

        if (update_word != "") dict.insert(update_word);
    }

    for (set<string>::iterator it=dict.begin(); it!=dict.end(); ++it)
        cout << *it << endl;

    return 0;
}
