#include<iostream>
#include<climits>

using namespace std;

int a[150001][2]={0};
int h[101]={0};

int main(void)
{
	int N=0;
	cin >> N;
	int min=LONG_MAX, max=-1;
	for (int i=1;i<=N;i++)
	{
		cin >> a[i][0] >> a[i][1];
		h[a[i][1]]=1;
		if (a[i][1]>max) max=a[i][1];
		if (a[i][1]<min) min=a[i][1];
	}

	for (int i=max;i>=min;i--)
		if (h[i])
			for (int j=1;j<=N;j++)
				if (a[j][1]==i)
					cout << a[j][0] << " " << a[j][1] << endl;
	return 0;
}