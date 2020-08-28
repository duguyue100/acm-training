// UVa 492 Pig-Latin

#include <bits/stdc++.h>

using namespace std;

bool check_alpha(char c)
{
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        return true;
    }

    return false;
}

bool check_vowel(char c)
{
    switch (c)
    {
        case 'A': return true; break;
        case 'a': return true; break;
        case 'E': return true; break;
        case 'e': return true; break;
        case 'I': return true; break;
        case 'i': return true; break;
        case 'O': return true; break;
        case 'o': return true; break;
        case 'U': return true; break;
        case 'u': return true; break;
        default: return false;
    }
}

string process(string ss)
{
    string word, end="";

    if (check_alpha(ss[ss.size()-1]))
    {
        word = ss;
    }
    else
    {
        word = ss.substr(0, ss.size()-1);
        end += ss[ss.size()-1];
    }

    if (check_vowel(word[0]))
    {
        word += "ay";
    }
    else
    {
        word = word.substr(1, word.size())+word[0];
        word += "ay";
    }

    return word+end;
}


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    while(getline(cin, line))
    {
        string results="";
        bool flag = false;
        for (size_t i=0; i<line.size(); i++)
        {
            if (flag == false && check_alpha(line[i]))
            {
                flag = true;
                results += line[i];
            }
            else if (flag == false && check_alpha(line[i]) == false)
            {
                cout << line[i];
            }
            else if (flag == true)
            {
                if (check_alpha(line[i]))
                    results += line[i];
                else
                {
                    flag = false;
                    cout << process(results) << line[i];
                    results = "";
                    continue;
                }

            }

            if (i == line.size()-1 && results != "")
            {
                flag = false;
                cout << process(results);
                results = "";
            }
        }

        cout << endl;
    }

    return 0;
}
