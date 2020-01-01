// UVa 10420 List of Conquests

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
    map<string, int> country;
    
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> text; 
        if (!country.count(text))
        {
            country[text] = 1;
        }
        else country[text]++;

        getline(cin, text);
    }

    for (std::map<string, int>::iterator it=country.begin(); it!=country.end(); ++it)
        cout << it->first << " " << it->second << endl;

    return 0;
}
