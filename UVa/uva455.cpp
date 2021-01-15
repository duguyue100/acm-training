// UVA 455 Periodic Strings

#include <bits/stdc++.h>

using namespace std;

size_t check(string in_str, string out, size_t idx)
{
    size_t update_idx = idx;

    while (out == in_str.substr(update_idx, idx))
    {
        update_idx += idx;
    }

    return update_idx;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;

    for (int t=1; t<=T; t++)
    {
        string in_str; cin >> in_str;

        string out="";
        size_t idx=1;
        size_t str_len = in_str.length();

        while (idx <= str_len)
        {
            out = in_str.substr(0, idx);

            size_t update_idx = check(in_str, out, idx);

            if (update_idx >= str_len)
                break;

            idx = update_idx+1;
        }

        cout << in_str.substr(0, idx).length() << endl;

        if (t != T) cout << endl;
    }

    return 0;
}
