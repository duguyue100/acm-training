// UVa 162 Beggar My Neighbour

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

    string card = "";
    int player = 1;
    bool normal_exit = true;

    map<char, int> face_cards;
    face_cards['J'] = 1;
    face_cards['Q'] = 2;
    face_cards['K'] = 3;
    face_cards['A'] = 4;
    
    while (cin >> card)
    {
        // quit the program
        if (card == "#") return 0;
        
        // one round of deck 
        deque<char> players[2], heap; // 0 is dealer, 1 is non-dealer
        players[1].push_front(card.at(1));
        for (int i=0; i<51; i++)
        {
            cin >> card;
            players[i%2].push_front(card[1]);
        }

        // simulation game
        player = 1;
        normal_exit = true;
        while (!players[(player+1)%2].empty())
        {
            // normal playing
            heap.push_front(players[player].front());
            players[player].pop_front();

            if (face_cards.count(heap.front()))
            {

                int face_card_num = face_cards[heap.front()];

                while (face_card_num != 0)
                {
                    if (!players[(player+1)%2].empty())
                    {
                        heap.push_front(players[(player+1)%2].front());
                        players[(player+1)%2].pop_front();
                        if (face_cards.count(heap.front()))
                        {
                            face_card_num = face_cards[heap.front()];
                            player = (player+1)%2;
                            continue;
                        }
                    }
                    else normal_exit = false;
                    
                    face_card_num--;
                }

                if (normal_exit == true)
                {
                    while (!heap.empty())
                    {
                        players[player].push_back(heap.back());
                        heap.pop_back();
                    }
                }
            }
            else player = (player+1)%2;
        }

        printf("%d%3lu\n", player+1, (normal_exit) ? players[player].size()-1:players[player].size());
    }

    return 0;
}
