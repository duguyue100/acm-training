// Uva 11956 Brainfuck

#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T = 0;
    cin >> T;
    cin.ignore();

    for (int i=1; i<=T; i++)
    {
        cout << "Case " << i << ":";
        
        unsigned char table[100];
        for (int j=0; j<100; j++) table[j] = 0;

        // read instructions
        string instructions = "";
        getline(cin, instructions);

        int pos = 0;
        for (unsigned int j=0; j<instructions.length(); j++)
        {
            if (instructions.at(j) == '>')
            {
                pos++;
                if (pos == 100) pos = 0;
            }

            if (instructions.at(j) == '<')
            {
                pos--;
                if (pos < 0) pos=99;
            }

            if (instructions.at(j) == '+')
            {
                table[pos]++;
            }

            if (instructions.at(j) == '-')
            {
                table[pos]--;
            }

        }

        for (int j=0; j<100; j++)
            printf(" %02X", table[j]);
        cout << endl;
    }

}
