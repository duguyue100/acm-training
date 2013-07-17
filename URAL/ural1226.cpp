#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	char ch;
	string str="";
	while (scanf("%c",&ch)!=EOF)
	{
		if ((ch>='a' && ch<='z') ||
			(ch>='A' && ch<='Z'))
			str=ch+str;
		else
		{
			cout << str << ch;
			str="";
		}
	}
	cout << str;

	return 0;
}