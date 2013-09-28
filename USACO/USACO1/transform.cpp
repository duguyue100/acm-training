/*
ID: duguyue1
TASK: transform
LANG: C++
*/

#include<iostream>
#include<fstream>

using namespace std;

char before[11][11]={0};
char after[11][11]={0};
int n=0;

bool option1()
{
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (before[i][j]!=after[j][n-i+1])
				return false;

	return true;
}

bool option2()
{
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (before[i][j]!=after[n-i+1][n-j+1])
				return false;

	return true;
}

bool option3()
{
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (before[i][j]!=after[n-j+1][i])
				return false;

	return true;
}

bool option4()
{
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (before[i][j]!=after[i][n-j+1])
				return false;

	return true;
}

bool option5()
{
	char temp[11][11]={0};

	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			temp[i][j]=before[i][j];

	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			before[i][n-j+1]=temp[i][j];

	if (option1() || option2() || option3())
		return true;
	else return false;
}

bool option6()
{
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (before[i][j]!=after[i][j])
				return false;

	return true;
}


int main(void)
{
	ifstream fin("transform.in");
	ofstream fout("transform.out");

	fin >> n;

	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			fin >> before[i][j];

	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			fin >> after[i][j];


	if (option1()) {fout << 1 << endl; return 0;}
	else if (option2()) {fout << 2 << endl; return 0;}
	else if (option3()) {fout << 3 << endl; return 0;}
	else if (option4()) {fout << 4 << endl; return 0;}
	else if (option6()) {fout << 6 << endl; return 0;}
	else if (option5()) {fout << 5 << endl; return 0;}
	else {fout << 7 << endl; return 0;}

	return 0;
}



