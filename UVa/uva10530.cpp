// UVa 10530 Guessing Game

#include <bits/stdc++.h>

using namespace std;

bool check(bool a[11])
{
    bool flag = true;

    for (int i=1; i<=10; i++)
    {
        if (a[i] == false)
            flag = false;
    }

    return flag;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;

    bool a[11] = {0};
    while (cin >> n && n != 0)
    {
        string line, line1;
        cin >> line >> line1; line = line+" "+line1;


        if (line == "right on")
        {
            if (check(a) || a[n] == true)
            {
                cout << "Stan is dishonest" << endl;
            }
            else
            {
                cout << "Stan may be honest" << endl;
            }

            for (int i=0; i<=10; i++) a[i] = false;
        }
        else
        {
            if (line == "too high")
            {
                for (int i=n; i<=10; i++)
                    a[i] = true;
            }
            else if (line == "too low")
            {
                for (int i=1; i<=n; i++)
                    a[i] = true;
            }
        }
    }

    return 0;
}
