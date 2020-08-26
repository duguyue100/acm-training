// UVa 444 Encoder and Decoder

#include <bits/stdc++.h>

using namespace std;

string encode(string line)
{
    string result = "";

    for (int k=line.size()-1; k>=0; k--)
    {
        int pos = (int)line[k];
        string ch = to_string(pos);
        reverse(ch.begin(), ch.end());
        result += ch;
    }

    return result;
}

string decode(string line)
{
    string result = "";
    string temp_line = line;

    while (temp_line != "")
    {
        if (temp_line[2] == '1' && temp_line.size() > 2)
        {
            string ch = temp_line.substr(0, 3);
            reverse(ch.begin(), ch.end());
            char c = (char)(stoi(ch));

            if (stoi(ch) > 122)
            {
                ch = temp_line.substr(0, 2);
                temp_line = temp_line.substr(2, temp_line.size()-2);
                reverse(ch.begin(), ch.end());
                c = (char)(stoi(ch));
            }
            else
            {
                temp_line = temp_line.substr(3, temp_line.size()-3);
            }

            result = c+result; 
        }
        else
        {
            string ch = temp_line.substr(0, 2);
            temp_line = temp_line.substr(2, temp_line.size()-2);
            reverse(ch.begin(), ch.end());
            char c = (char)(stoi(ch));
            result = c+result; 
        }


    }

    return result;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    while (getline(cin, line))
    {
        // cout << line << endl;
        if (line[0] >= '0' && line[0] <='9')
        {
            // decoder
            cout << decode(line) << endl;
        }
        else
        {
            // encoder
            cout << encode(line) << endl;
        }
    }

    return 0;
}
