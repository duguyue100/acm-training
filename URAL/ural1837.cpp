#include<iostream>
#include<string>

using namespace std;

string a[201][4];
string b[401];
int f[401][401]={0};
int n=0,k=0;

void sort(int l, int r)
{
	int i=0,j=0;
	string x,y;
	
	i=l;
	j=r;
	x=b[(l+r)/2];
	do
	{
		while (b[i]<x) i++;
		while (x<b[j]) j--;

		if (i<=j)
		{
			y=b[i];
			b[i]=b[j];
			b[j]=y;
			i++;
			j--;
		}
	}while(i<=j);
	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

int found(string st)
{
	for (int i=1;i<=k;i++)
	{
		if (b[i]==st)
			return i;
	}
	return 0;
}

void assign_f(int k)
{
	for (int i=0;i<=k;i++)
		for (int j=0;j<=k;j++)
			if (i!=j) f[i][j]=1000000;
	for (int i=1;i<=n;i++)
	{
		int index1=found(a[i][1]);
		int index2=found(a[i][2]);
		int index3=found(a[i][3]);
		f[index1][index2]=1;
		f[index2][index1]=1;
		f[index2][index3]=1;
		f[index3][index2]=1;
		f[index1][index3]=1;
		f[index3][index1]=1;
	}
}

int main(void)
{
	k=0;
	cin >> n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=3;j++)
		{
			cin >> a[i][j];
			if (!found(a[i][j]))
			{
				k++;
				b[k]=a[i][j];
			}
		}

	sort(1,k);
	assign_f(k);

	if (found("Isenbaev")==0)
	{
		for (int i=1;i<=k;i++)
			cout << b[i] << " " << "undefined" << endl;
		return 0;
	}
	
	for (int t=1;t<=k;t++)
		for (int i=1;i<=k;i++)
			for (int j=1;j<=k;j++)
				if (f[i][t]+f[t][j]<f[i][j])
					f[i][j]=f[i][t]+f[t][j];

	int index=found("Isenbaev");

	for (int i=1;i<=k;i++)
	{
		cout << b[i] << " ";
		if (f[index][i]==1000000)
			cout << "undefined" << endl;
		else cout << f[index][i] << endl;
	}

	return 0;
}

// be careful, use most classic floyd algorithm.