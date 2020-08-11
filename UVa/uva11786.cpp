// UVa 11786 Global Raining at Bididibus

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

bool palindrome(string line, size_t i, size_t j)
{
    if ((line[i] == '/') or (line[j] == '\\') or (line[i]=='_') or (line[j]=='_'))
        return false;

    int num_s = 0;
    int num_b = 0;

    for (size_t k=i; k<=j; k++)
    {
        if (line[k] == '/') num_s++;
        else if (line[k] == '\\') num_b++;
    }

    return (num_s == num_b);
}

int cal_water(string line, size_t i, size_t j)
{
    size_t sub_len = j-i+1;
    size_t num_iters = sub_len/2; 

    int water_s = 0;
    int water_b = 0;
    int level = 0;

    for (size_t k=i; k<=j; k++)
    {
        if (line[k] == '\\')
        {
            level++;
            water_s += 1;
            water_b += (level-1);
        }
        else if (line[k] == '/')
        {
            level--;
            water_s += 1;
            water_b += level;
        }
        else if (line[k] == '_')
        {
            water_b += level;
        }
    }


    return water_s/2+water_b;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;

    string line = "";
    getline(cin, line);
    
    for (int t=0; t<n; t++)
    {
        getline(cin, line);
        size_t len = line.size();

        int total_water = 0;

        int a[10002] = {0};

        // construct level array
        for (size_t i=1; i<=len; i++)
        {
            if (line[i-1] == '/')
                a[i] = a[i-1]+1;
            else if (line[i-1] == '\\')
                a[i] = a[i-1]-1;
            else a[i] = a[i-1];
        }


        for (size_t i=0; i<=len; i++)
        {
            int j_r = -1;
            for (size_t j=i+1; j<=len; j++)
                if (a[j] == a[i])
                {
                    j_r = j;
                    break;
                }
            if (j_r != -1)
                if (palindrome(line, i, j_r-1))
                {
                    total_water += cal_water(line, i, j_r-1);
                    i = j_r-1;
                }
        }
        cout << total_water << endl;
    }


    return 0;
}
