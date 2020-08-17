// UVa 644 Immediate Decodability

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int N;

    string code;
    int set = 1;

    vector<string> code_book;
    bool flag = true;

    while (cin >> code)
    {
        if (code == "9")
        {
            code_book.clear();

            if (flag == true)
            {
                cout << "Set " << set << " is immediately decodable" << endl;
            }
            else
            {
                cout << "Set " << set << " is not immediately decodable" << endl;
            }
            set ++;
            flag = true;
        }
        else
        {
            if (flag == true)
            {
                for (size_t i=0; i<code_book.size(); i++)
                {
                    if ((code == code_book[i].substr(0, code.size())) || (code.substr(0, code_book[i].size()) == code_book[i]))
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag == true)
                    code_book.push_back(code);
            }
        }
    }

    return 0;
}
