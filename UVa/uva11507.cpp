// UVa 11507 Bender B. Rodriguez Problem

#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>

using namespace std;

int main(){
    // remapping the input streams
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    // read inputs
    int L = 0;

    cin >> L;
    while (L != 0){
        string b="", s="+x";

        for (int i=1; i<L; i++){
            // read input
            cin >> b;

            if (b == "No") continue;

            if (s == "+x")
            {
                s = b;
            }
            else if (s == "-x")
            {
                if (b == "+y") s = "-y";
                if (b == "-y") s = "+y";
                if (b == "+z") s = "-z";
                if (b == "-z") s = "+z";
            }
            else if (s == "+y")
            {
                if (b == "+y") s = "-x";
                if (b == "-y") s = "+x";
            }
            else if (s == "-y")
            {
                if (b == "-y") s = "-x";
                if (b == "+y") s = "+x";
            }
            else if (s == "+z")
            {
                if (b == "+z") s = "-x";
                if (b == "-z") s = "+x";
            }
            else if (s == "-z")
            {
                if (b == "-z") s = "-x";
                if (b == "+z") s = "+x";
            }

            // dont care about processing "No"
        }

        cout << s << endl;
        cin >> L;
    }
}
