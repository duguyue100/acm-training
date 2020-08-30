// UVa 245 Uncompress

#include<bits/stdc++.h>

using namespace std;

bool is_alphanum(char c)
{
    if ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
        return true;
    
    return false;
}

bool is_alphabet(char c)
{
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
        return true;
    
    return false;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    stack<string> a;

    while (getline(cin, line))
    {
        if (line == "0") break;

        for (size_t i=0; i<line.size(); i++)
        {
            if (is_alphanum(line[i]))
            {
                // get word
                string result = "";
                while (is_alphanum(line[i]))
                {
                    result += line[i];
                    i++;
                }
                i--;

                if (is_alphabet(result[0]))
                {
                    a.push(result);
                    cout << result;
                }
                else
                {
                    stack<string> b;
                    int word_idx = stoi(result);
                    string word;

                    for (int j=1; j<=word_idx; j++)
                    {
                        b.push(a.top());
                        a.pop();
                    }
                    word = b.top(); b.pop();

                    for (int j=1; j<word_idx; j++)
                    {
                        a.push(b.top());
                        b.pop();
                    }
                    a.push(word);

                    cout << word;
                }
            }
            else
            {
                cout << line[i];
            }
        }

        cout << endl;
    }

    return 0;
}
