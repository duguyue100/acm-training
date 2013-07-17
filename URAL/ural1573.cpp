#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int b=0, r=0, y=0;
	cin >> b >> r >> y;

	int k=0;
	cin >> k;
	bool a[4]={0};
	for (int i=1;i<=k;i++)
	{
		string st="";
		cin >> st;
		if (st=="Red") a[1]=true;
		else if (st=="Yellow") a[2]=true;
		else if (st=="Blue") a[3]=true;
	}

	int kind=1;
	if (a[1]==true) kind*=r;
	if (a[2]==true) kind*=y;
	if (a[3]==true) kind*=b;

	cout << kind;

	return 0;
}