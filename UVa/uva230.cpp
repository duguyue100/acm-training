// UVa 230 Borrowers

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line = "";

    bool stock_flag = true;
    map<string, string> stock_t;
    // multimap<string, string> stock_a;
    set<pair<string, string> > stock_a;
    map<string, string> borrow_list;
    // multimap<string, string> return_list;
    set<pair<string, string> > return_list;
    while (getline(cin, line))
    {
        if (stock_flag == true)
        {
            if (line == "END")
            {
                stock_flag = false;
                continue;
            }
            size_t title_author_sep = line.find("\" by ");
            string title = line.substr(0, title_author_sep+1);
            string author = line.substr(
                title_author_sep+5, line.size()-(title_author_sep+5));

            stock_t[title] = author;
            stock_a.insert(pair<string, string>(author, title));
        }

        // parsing for output
        if (stock_flag == false)
        {
            if (line=="END") break;

            if (line=="SHELVE")
            {
                for (set<pair<string, string> >::iterator it = return_list.begin(); it != return_list.end(); ++it) 
                {
                    // find previous book from stock_a
                     
                    set<pair<string, string> >::iterator previous;
                    for (set<pair<string, string> >::iterator j = stock_a.begin(); j != stock_a.end(); ++j) 
                    {
                        if (j->second == it->second)
                        {
                            previous = j;
                            break;
                        }
                    }

                    int border_flag = false;
                    while ((!stock_t.count(previous->second)) && (previous != stock_a.begin()))
                    {
                        previous--;

                        if (previous == stock_a.begin())
                        {
                            if (stock_t.count(previous->second))
                            {
                                border_flag = true;
                                break;
                            }
                        }
                    }

                    if ((previous == stock_a.begin() && border_flag==false) || stock_t.empty())
                    {
                        cout << "Put " << it->second << " first" << endl;
                    }
                    else
                    {
                        cout << "Put " << it->second << " after " << previous->second << endl;
                    }

                    // put the book back to the stock_t
                    stock_t[it->second] = it->first;
                }

                // erase the book
                return_list.clear();
                
                cout << "END" << endl;
            }
            else
            {
                if (line.substr(0, 6) == "BORROW")
                {
                    string book = line.substr(7, line.size());
                    if (stock_t.count(book))
                    {
                        borrow_list[book] = stock_t[book];
                        stock_t.erase(book);
                    }
                }
                else if (line.substr(0, 6) == "RETURN")
                {
                    string book = line.substr(7, line.size());
                    if (borrow_list.count(book))
                    {
                        return_list.insert(
                            pair<string, string>(
                                borrow_list[book], book));
                        borrow_list.erase(book);
                    }
                }
            }
        }
    }

    return 0;
}
