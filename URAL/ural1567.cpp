#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	char st[1000]={0};
	gets(st);
	int a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2};
	int cost=0;
	for (int i=0;i<strlen(st);i++)
	{
		if (st[i]=='.') cost++;
		else if (st[i]==' ') cost++;
		else if (st[i]==',') cost+=2;
		else if (st[i]=='!') cost+=3;
		else cost+=a[(int)(st[i]-'a')];
	}

	cout << cost;

	cin >> cost;

	return 0;
}