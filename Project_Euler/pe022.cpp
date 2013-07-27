#include<iostream>
#include<string>

using namespace std;

string a[10000];

void sort(int l, int r)
{
	int i=0,j=0;
	string x="",y="";
	i=l;
	j=r;
	x=a[(l+r)/2];
	do
	{
		while (a[i]<x) i++;
		while (x<a[j]) j--;
		if (i<=j)
		{
			y=a[i];
			a[i]=a[j];
			a[j]=y;
			i++;
			j--;
		}
	}while (i<=j);
	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int main(void)
{
	freopen("names.txt","r",stdin);

	string st="";
	cin >> st;
	string b="\",\"";
	st=st.substr(1,st.length()-2);

	int pos=st.find(b);
	int count=1;
	while (pos!=-1)
	{
		a[count]=st.substr(0,pos);
		st.erase(0,pos+b.length());
		count++;
		pos=st.find(b);
	}

	a[count]=st;

	sort(1,count);

	long long sum=0;

	for (int i=1;i<=count;i++)
	{
		int t=0;
		for (int j=0;j<a[i].length();j++)
			t+=a[i][j]-'A'+1;
		sum+=(t*i);
	}

	cout << sum;

	return 0;
}