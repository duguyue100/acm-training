#include<iostream>

using namespace std;

int a[120][120]={0};
int c[200]={0};

int maxarray(int n)
{
	int b=0, sum=-100000000; for (int i=1;i<=n;i++)
	{
		if (b>0) b+=c[i]; else b=c[i];
		if (b>sum) sum=b;
	}
	return sum;
}

int maxmatrix(int n)
{
	int sum=-100000000, max=0;
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) c[j]=0;
		for (int j=i;j<=n;j++) {
			for (int k=1;k<=n;k++) c[k]+=a[j][k];
			max=maxarray(n);
			if (max>sum) sum=max; }
	}
	return sum;
}
int main(void)
{
	int n=0;
	cin >> n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) cin >> a[i][j];
	cout << maxmatrix(n) << endl;
	return 0;
}
