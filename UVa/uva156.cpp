// UVa 156 Ananagrams

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

string check(map<string, int> domain_count, string word)
{
    if (domain_count.empty())
        return "";

    for (map<string, int>::iterator it=domain_count.begin(); it!=domain_count.end(); ++it)
    {
        string candidate = "";
        for (int i=0; i<it->first.size(); i++)
            candidate += tolower(it->first[i]);

        string check_word = "";
        for (int i=0; i<word.size(); i++)
            check_word += tolower(word[i]);

        // check anagrams
        if (candidate.length() == check_word.length())
        {
            sort(candidate.begin(), candidate.end());
            sort(check_word.begin(), check_word.end());

            if (candidate == check_word)
                return it->first;
        }
    }
    return "";
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string word;
    map<string, string> domain;
    map<string, int> domain_count;

    while (true)
    {
        cin >> word;

        if (word[0] == '#') break;

        string matched = check(domain_count, word);
        if (matched != "")
        {
            domain_count[matched]++;
            domain_count[word] = 1;
        }    
        else domain_count[word] = 0;
    }

    for (map<string, int>::iterator it=domain_count.begin(); it!=domain_count.end(); ++it)
        if (it->second == 0) cout << it->first << endl;
    

    return 0;
}
