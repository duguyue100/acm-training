#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int l=0,k=0,h=0;
	cin >> l >> k >> h;
	printf("%.8f ",(double)(l/k)*h);
	if (l%k==0)
	{
		printf("%.8f",(double)(l/k)*h);
	}
	else printf("%.8f",(double)(l/k)*h+h);

	return 0;
}