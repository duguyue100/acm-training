#include<iostream>
#include<cmath>

using namespace std;

int count(int n)
{
	int a[10]={0,3,3,5,4,4,3,5,5,4}; // zero to nine
	int b[10]={0,0,6,6,5,5,5,7,6,6}; // twenty to ninety
	int c[10]={3,6,6,8,8,7,7,9,8,8}; // ten to nineteen
	int hundredand=10;

	int sum=0;
	int t=n;
	int a1=t/100;
	t-=a1*100;
	int a2=t/10;
	t-=a2*10;
	int a3=t;

	if (a1!=0)
	{
		sum+=a[a1];
		sum+=hundredand;
	}
	if (a2==1)
	{
		sum+=c[a3];
	}
	else if (a2!=0)
	{
		sum+=b[a2];
	}
	if (a3!=0 && a2!=1)
	{
		sum+=a[a3];
	}

	return sum;
}

int main(void)
{
	count(110);
	long long sum=0;

	for (int i=1;i<=999;i++)
		sum+=count(i);

	sum+=11;
	
	cout << sum << endl;
	cin >> sum;
	

	return 0;
}