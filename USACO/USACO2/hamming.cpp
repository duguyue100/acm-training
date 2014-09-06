/*
ID: duguyue1
TASK: hamming
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int N=0, B=0, D=0;
int a[129]={0};
int d[257][257]={0};

int bilength(int n)
{
	int leng=0;
	n = n<<1;
	while (n/2!=0)
	{
		n/=2;
		if (n%2==1)
			leng++;
	}

	return leng;
}

bool check(int a, int b)
{
	int c=a xor b;

	if (bilength(c)>=D)
		return true;

	return false;
}

bool check_valid(int n, int count)
{
	for (int i=0;i<count;i++)
	{
		if (d[a[i]][n]<D)
			return false;
	}

	return true;
}

int main(void)
{
	freopen("hamming.in", "r", stdin);
	freopen("hamming.out", "w", stdout);

	cin >> N >> B >> D;

	int max=(int)pow(2.0,B);


	for (int i=0;i<=max;i++)
	{
		for (int j=i+1;j<=max;j++)
		{
			d[i][j]=bilength(i xor j);
		}
	}

	int counter=0;
	int base=0;
	while (counter<N)
	{
		a[counter]=base;

		counter++;
		for (int i=base+1;i<=max;i++)
			if (check_valid(i, counter))
			{
				base=i;
				break;
			}
	}

	for (int i=0;i<N/10;i++)
	{
		for (int j=0;j<9;j++)
			if (i*10+j<N)
				cout << a[i*10+j] << " ";
			else break;
		if (i*10+9<N)
			cout << a[i*10+9] << endl;
		else
			cout << endl;
	}

	if (N%10!=0)
	{
		for (int i=0;i<(10-((N/10+1)*10-N))-1;i++)
			cout << a[(N/10)*10+i] << " ";
		cout << a[N-1] << endl;
	}

	return 0;
}


