// UVa 11541 Decoding

#include <bits/stdc++.h>

using namespace std;


int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int T; cin >> T;
    
    for (int t=1; t<=T; t++)
    {
        cout << "Case " << t << ": ";
        string result = "";

        string line; cin >> line;
        line += "A";

        bool str_flag = false;
        bool num_flag = false;
        bool print_flag = true;
        string token = "";
        string repeats = "0";
        for (int i=0; i<line.size(); i++)
        {
            if (print_flag == true)
            {
                for (int i=1; i<=stoi(repeats); i++)
                {
                    cout << token;
                }

                str_flag = true;
                num_flag = false;
                print_flag = false;
                token = "";
                repeats = "0";
            }

            if ((line[i]>='A' && line[i]<='Z') && print_flag == false)
            {
                // string
                if (str_flag == true)
                    token += line[i];

                if (line[i+1]>='0' && line[i+1]<='9')
                {
                    num_flag = true;
                    str_flag = false;
                }

            }
            else if ((line[i]>='0' && line[i]<='9') && print_flag == false)
            {
                // number
                if (num_flag == true)
                    repeats += line[i]; 

                if (line[i+1]>='A' && line[i+1]<='Z')
                {
                    print_flag = true;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
