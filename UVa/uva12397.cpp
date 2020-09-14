// UVa 12397 Roman Numerals

#include<bits/stdc++.h>

using namespace std;

string num2roman(int num)
{
    string result = "";

    // M?
    int r = num / 1000;
    num = num%1000;

    if (r > 0 && r<5)
    {
        for (int i=0; i<r; i++) result += 'M';
    }

    // CM?
    if (num >= 900 && num < 1000)
    {
        result += "CM";
        num -= 900;
    }

    // D?
    if (num > 500 && num < 900)
    {
        result += "D";
        num -= 500;
    }

    // CD?
    if (num >= 400 && num < 500)
    {
        result += "CD";
        num -= 400;
    }

    // C?
    r = num / 100;
    num %= 100;
    if (r > 0 && r<5)
    {
        for (int i=0; i<r; i++) result += 'C';
    }
    else if (r==5)
    {
        num -= 500;
        result += "D";
    }

    // XC?
    if (num >= 90 && num < 100)
    {
        result += "XC";
        num -= 90;
    }

    // L?
    if (num > 50 && num < 90)
    {
        result += "L";
        num -= 50;
    }

    // XL?
    if (num >= 40 && num < 50)
    {
        result += "XL";
        num -= 40;
    }

    // X?
    r = num/10;
    num %= 10;

    if (r > 0 && r<5)
    {
        for (int i=0; i<r; i++) result += 'X';
    }
    else if (r == 5)
    {
        result += "L";
    }

    // IX?
    if (num == 9)
    {
        result += "IX";
        num -= 9;
    }

    // V?
    if (num >= 5 && num < 9)
    {
        result += "V";
        num -= 5;
    }

    // IV?
    if (num == 4)
    {
        result += "IV";
        num -= 4;
    }

    // I?
    r = num/1;
    num %= 1;
    if (r > 0 && r<5)
    {
        for (int i=0; i<r; i++) result += "I";
    }
    else if (r == 5)
    {
        result += "V";
    }

    return result;

}

int roman2num(string line)
{
    line += "Z";
    int result = 0;
    for (size_t i=0; i<line.size()-1; i++)
    {
        if (line[i] == 'M')
        {
            result += 1000;        
        }
        else if (line[i] == 'C')
        {
            if (line[i+1] == 'M')
            {
                i++;
                result += 900;
            }
            else if (line[i+1] == 'D')
            {
                i++;
                result += 400;
            }
            else
            {
                result += 100;
            }
        }
        else if (line[i] == 'D')
        {
            result += 500;
        }
        else if (line[i] == 'X')
        {
            if (line[i+1] == 'C')
            {
                i++;
                result += 90;
            }
            else if (line[i+1] == 'L')
            {
                i++;
                result += 40;
            }
            else
            {
                result += 10;
            }
        }
        else if (line[i] == 'L')
        {
            result += 50;
        }
        else if (line[i] == 'I')
        {
            if (line[i+1] == 'X')
            {
                i++;
                result += 9;
            }
            else if (line[i+1] == 'V')
            {
                i++;
                result += 4;
            }
            else
            {
                result ++;
            }
        }
        else if (line[i] == 'V')
        {
            result += 5;
        }
    }

    return result;
}

int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int num;

    map<char, int> m;
    m['I'] = 1; m['V'] = 2; m['X'] = 2; m['L'] = 2; m['C'] = 2;
    m['D'] = 3; m['M'] = 4;

    while (cin >> num)
    {
        string r_num = num2roman(num);

        int sum = 0;

        for (size_t i=0; i<r_num.size(); i++)
        {
            sum += m[r_num[i]];
        }

        cout << sum << endl;
    }

    return 0;
}
