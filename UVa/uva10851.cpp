// UVa 10851 2D Hieroglyphs decoder

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N; cin >> N;
    string line;
    getline(cin, line);

    for (int n=1; n<=N; n++)
    {
        vector<bitset<8> > chars;
        getline(cin, line);
        for (int i=0; i<line.size()-1; i++)
            chars.push_back(bitset<8>(0));
        for (int i=0; i<8; i++)
        {
            getline(cin, line);
            for (int k=1; k<line.size()-1; k++)
            {
                if (line[k] == '/') chars[k][i] = false;
                else if (line[k] == '\\') chars[k][i] = true;
            }
        }

        for (int i=1; i<line.size()-1; i++)
        {
            char c = (char)(chars[i].to_ulong());
            cout << c;
        }
        cout << endl;
        getline(cin, line);
        getline(cin, line);
    }

    return 0;
}
