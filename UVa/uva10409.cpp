// UVa 10409 Die Game

#include <bits/stdc++.h>

using namespace std;

string new_face(string die, string command)
{
    string new_die = "0000000";
    if (command == "north")
    {
        new_die[1] = die[6];
        new_die[2] = die[5];
        new_die[3] = die[3];
        new_die[4] = die[4];
        new_die[5] = die[1];
        new_die[6] = die[2];
    }
    else if (command == "south")
    {
        new_die[1] = die[5];
        new_die[2] = die[6];
        new_die[3] = die[3];
        new_die[4] = die[4];
        new_die[5] = die[2];
        new_die[6] = die[1];
    }
    else if (command == "east")
    {
        new_die[1] = die[3];
        new_die[2] = die[4];
        new_die[3] = die[2];
        new_die[4] = die[1];
        new_die[5] = die[5];
        new_die[6] = die[6];
    }
    else if (command == "west")
    {
        new_die[1] = die[4];
        new_die[2] = die[3];
        new_die[3] = die[1];
        new_die[4] = die[2];
        new_die[5] = die[5];
        new_die[6] = die[6];
    }

    return new_die;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    while (cin >> n && n != 0)
    {
        string die = "0163425";

        for (int i=1; i<=n; i++)
        {
            string command; cin >> command;
            die = new_face(die, command);
        }
        cout << die[1] << endl;
    }

    return 0;
}
