#include<iostream>
#include<string>

using namespace std;

int a[51]={0};

int divide(int l)
{
	int k=0;
	for (int i=l;i>=1;i--)
	{
		a[i]=a[i]+k*10;
		k=a[i]%7;
		a[i]/=7;
	}

	return k;
}

int main(void)
{
	string st="";

	cin >> st;
	for (int i=st.length()-1;i>=0;i--)
		a[st.length()-i]=st[i]-'0';

	cout << divide(st.length());

	return 0;
}