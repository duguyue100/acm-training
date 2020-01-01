// UVa 10935 Throwing cards away I

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

    while (true)
    {
        int num_cards;
        cin >> num_cards;

        if (num_cards == 0) break;

        deque<int> deck;
        deque<int> discard_cards;
        for (int i=1; i<=num_cards; i++)
            deck.push_back(i);

        while (deck.size() > 1)
        {
            discard_cards.push_back(deck.front());
            deck.pop_front();
            
            deck.push_back(deck.front());
            deck.pop_front();
        }

        cout << "Discarded cards:";
        if (!discard_cards.empty())
        {
            cout << " " << discard_cards.front();
            discard_cards.pop_front();
            while (!discard_cards.empty())
            {
                cout << ", " << discard_cards.front();
                discard_cards.pop_front();
            }
        }
        cout << endl;

        cout << "Remaining card: " << deck.front() << endl;
    }

    return 0;
}
