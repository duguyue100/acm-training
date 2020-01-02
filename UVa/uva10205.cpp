// UVa 10205 Stack ’em Up

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

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n_cases;
    cin >> n_cases;

    for (int i=0; i<n_cases; i++)
    {
        int n;
        cin >> n;
        int shuffles[n+1][53];
        int current_deck[53];
        int prev_deck[53];
        for (int j=1; j<=52; j++) prev_deck[j] = j;

        for (int j=1; j<=n; j++)
            for (int k=1; k<=52; k++)
                cin >> shuffles[j][k];
        cin.ignore();

        string s;
        while (getline(cin, s))
        {
            if (s == "") break;

            int shuffle_case = stoi(s);

            for (int j=1; j<=52; j++)
            {
                current_deck[j] = prev_deck[shuffles[shuffle_case][j]];
            }

            for (int j=1; j<=52; j++)
            {
                prev_deck[j] = current_deck[j];
                current_deck[j] = 0;
            }
        }

        for (int j=1; j<=52; j++)
        {
            int number = prev_deck[j] % 13;
            int suit = prev_deck[j] / 13;

            switch(number)
            {
                case 10: cout << "Jack"; break;
                case 11: cout << "Queen"; break;
                case 12: cout << "King"; break;
                case 0: cout << "Ace"; break;
                default: cout << number+1; break;
            }

            if (number != 0)
            {
                switch(suit)
                {
                    case 0: cout << " of Clubs"; break;
                    case 1: cout << " of Diamonds"; break;
                    case 2: cout << " of Hearts"; break;
                    case 3: cout << " of Spades"; break;
                }
            }
            else
            {
                switch(suit)
                {
                    case 1: cout << " of Clubs"; break;
                    case 2: cout << " of Diamonds"; break;
                    case 3: cout << " of Hearts"; break;
                    case 4: cout << " of Spades"; break;
                }
            }
            cout << endl;
        }

        if (i != n_cases-1)
            cout << endl;
    }

}
