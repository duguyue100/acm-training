#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

char mask[4][4]={0};
char pass[4][4]={0};
string st="";

void match()
{
	for (int i=0;i<4;i++)
		for (int j=0;j<4;j++)
			if (mask[i][j]=='X')
				st+=pass[i][j];
}

void rotate()
{
	char temp[4][4]={0};
	for (int i=0;i<4;i++)
		for (int j=0;j<4;j++) temp[i][j]=mask[i][j];

	for (int i=0;i<4;i++)
		for (int j=0;j<4;j++)
			mask[j][3-i]=temp[i][j];
	
}


int main(void)
{	
	for (int i=0;i<4;i++)
	{
		string t="";
		cin >> t;
		for (int j=0;j<4;j++)
			mask[i][j]=t[j];
	}
	for (int i=0;i<4;i++)
	{
		string t="";
		cin >> t;
		for (int j=0;j<4;j++)
			pass[i][j]=t[j];
	}

	while (st.length()!=16)
	{
		match();
		rotate();
	}

	cout << st;
	
	return 0;
}