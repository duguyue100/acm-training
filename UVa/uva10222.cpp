// UVa 10222 Decode the Mad man

#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <set>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string sen;

    getline(cin, sen);
    
    for (int i=0; i<sen.size(); i++)
    {
        char letter = tolower(sen[i]);

        switch(letter)
        {
            case 'e': cout << 'q'; break;
            case 'd': cout << 'a'; break;
            case 'c': cout << 'z'; break;
            case 'r': cout << 'w'; break;
            case 'f': cout << 's'; break;
            case 'v': cout << 'x'; break;
            case 't': cout << 'e'; break;
            case 'g': cout << 'd'; break;
            case 'b': cout << 'c'; break;
            case 'y': cout << 'r'; break;
            case 'h': cout << 'f'; break;
            case 'n': cout << 'v'; break;
            case 'u': cout << 't'; break;
            case 'j': cout << 'g'; break;
            case 'm': cout << 'b'; break;
            case 'i': cout << 'y'; break;
            case 'k': cout << 'h'; break;
            case ',': cout << 'n'; break;
            case 'o': cout << 'u'; break;
            case 'l': cout << 'j'; break;
            case '.': cout << 'm'; break;
            case 'p': cout << 'i'; break;
            case ';': cout << 'k'; break;
            case '/': cout << ','; break;
            case '[': cout << 'o'; break;
            case '\'': cout << 'l'; break;
            case ']': cout << 'p'; break;
            default: cout << letter; break;
        }
    }
    cout << endl;

    return 0;
}
