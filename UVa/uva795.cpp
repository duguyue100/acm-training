// UVa 795 Sandorf’s Cipher

#include<bits/stdc++.h>

using namespace std;

string decode(string line, map<int, int> m)
{
    string result = "";
    size_t chunk = line.size()/36;

    for (size_t c=0; c<chunk; c++)
    {
        string chunk_str = line.substr(c*36, 36);
        string res_chunk = string(36, ' ');

        for (map<int, int>::iterator it=m.begin(); it!=m.end(); it++)
        {
            res_chunk[it->second] = chunk_str[it->first];
        }

        result+=res_chunk;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string line;

    map<int, int> m;

    m[1]=0;m[3]=1;m[5]=2;m[10]=3;m[14]=4;m[19]=5;m[22]=6;m[29]=7;m[33]=8;
    m[8]=9;m[11]=10;m[15]=11;m[18]=12;m[23]=13;m[26]=14;m[28]=15;m[31]=16;m[35]=17;
    m[2]=18;m[6]=19;m[13]=20;m[16]=21;m[21]=22;m[25]=23;m[30]=24;m[32]=25;m[34]=26;
    m[0]=27;m[4]=28;m[7]=29;m[9]=30;m[12]=31;m[17]=32;m[20]=33;m[24]=34;m[27]=35;

    while (getline(cin, line))
    {
        if (line == "")
        {
            cout << endl;
        }
        else
        {
            string decoded = decode(line, m);
            
            size_t idx = decoded.size()-1;

            while (decoded[idx] == '#')
            {
                idx --;
            }

            for (size_t i=0; i<=idx; i++)
            {
                cout << decoded[i];
            }
            cout << endl;
        }
    }

    return 0;
}
