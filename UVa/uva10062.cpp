// UVA 10062 Tell me the frequencies!

#include <bits/stdc++.h>

using namespace std;

bool fncomp (pair<int, int> lhs, pair<int, int> rhs)
{
    if (lhs.first < rhs.first)
        return true;
    else if (lhs.first > rhs.first)
        return false;
    else
    {
        if (lhs.second > rhs.second)
            return true;
        else
            return false;
    }

    return lhs<rhs;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
    
    string line;
    getline(cin, line);
    
    bool flag = false;
    do
    {
        int a[128] = {0};

        for (size_t i=0; i<line.size(); i++)
        {
            a[(int)line[i]]++;
        }

        bool(*fn_pt)(pair<int, int>, pair<int, int>) = fncomp;
        set<pair<int, int>, bool(*)(pair<int, int>, pair<int, int>) > m(fn_pt);

        for (int i=32; i<128; i++)
        {
            if (a[i] != 0)
            {
                m.insert(pair<int, int>(a[i], i));
            }
        }

        if (flag == true)
        {
            cout << endl;
        }
        else
        {
            flag = true;
        }

        for (set<pair<int, int> >::iterator it=m.begin(); it!=m.end(); it++)
        {
            cout << it->second << " " << it->first << endl;
        }
    }while(getline(cin, line));

    return 0;
}
