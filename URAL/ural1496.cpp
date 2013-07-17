#include<iostream>
#include<string>

using namespace std;

struct spam{
	int k;
	string name;
	spam()
	{
		k=0;
		name="";
	}
}a[100];

int check(int t, string st)
{
	for (int i=0;i<t;i++)
	{
		if (a[i].name==st)
			return i;
	}

	return -1;
}

int main(void)
{
	int n=0;
	cin >> n;

	int t=0;
	for (int i=1;i<=n;i++)
	{
		string st="";
		cin >> st;
		
		int index=check(t,st);
		if (index!=-1)
			a[index].k++;
		else if (index==-1)
		{
			a[t].name=st;
			a[t].k++;
			t++;
		}
	}

	for (int i=0;i<=t;i++)
		if (a[i].k>=2)
			cout << a[i].name << endl;

	return 0;
}