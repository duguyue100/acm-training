/*
ID: duguyue1
TASK: namenum
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>
#include<set>

using namespace std;

int a[13]={0};
set<char> b[10];

bool checkString(string str)
{
	for (int i=0;i<str.length();i++)
		if (b[a[i+1]].find(str[i])==b[a[i+1]].end())
			return false;

	return true;
}

int main(void)
{
	ifstream fin("namenum.in");
	ofstream fout("namenum.out");

	b[2].insert('A');b[2].insert('B');b[2].insert('C');
	b[3].insert('D');b[3].insert('E');b[3].insert('F');
	b[4].insert('G');b[4].insert('H');b[4].insert('I');
	b[5].insert('J');b[5].insert('K');b[5].insert('L');
	b[6].insert('M');b[6].insert('N');b[6].insert('O');
	b[7].insert('P');b[7].insert('R');b[7].insert('S');
	b[8].insert('T');b[8].insert('U');b[8].insert('V');
	b[8].insert('W');b[8].insert('X');b[9].insert('Y');

	char ch;
	int n=1;
	while (fin >> ch)
	{
		a[n]=(int)(ch-'0');
		n++;
	}
	n--;
	ifstream dict("dict.txt");

	string str="";
	bool check=false;
	while (dict >> str)
	{
		if (str.length()==n)
		{
			if (checkString(str))
			{
				check=true;
				fout << str << endl;
			}
		}
	}

	if (check==false)
		fout << "NONE" << endl;

	return 0;
}



