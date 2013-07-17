#include<iostream>

using namespace std;

long long pow(long long a, long long b, long long n)
{
	long long ret=1;
	long long tmp=a;
	while (b)
	{
		if (b&0x1) ret=ret*tmp%n;
		tmp=tmp*tmp%n;
		b>>=1;
	}

	return ret;
}

int main(void)
{
	int N=0, M=0, Y=0;
	int a[1000]={0};
	int k=1;
	
	cin >> N >> M >> Y;

	for (int i=0;i<M;i++)
	{
		if (pow(i,N,M)==Y)
		{
			a[k]=i;
			k++;
		}
	}
	k--;
	if (k==0) cout << -1;
	else{
		for (int i=1;i<k;i++)
			cout << a[i] << " ";
		cout << a[k];
	}
	
	return 0;
}