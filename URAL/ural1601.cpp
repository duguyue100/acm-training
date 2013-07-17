#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

char a[10001]={0};

int main(void)
{
	int k=1; char ch=' ';
	int t=1;
	while (scanf("%c",&ch)!=EOF)
	{
		if (ch>='A' && ch<='z')
		{
			if (k)
			{
				printf("%c",ch);
				k=0;
			}
			else printf("%c",ch+32);
		}
		else if (ch =='.' || ch=='?' || ch=='!')
		{
			printf("%c",ch);
			k=1;
		}
		else printf("%c",ch);
	}

	return 0;
}