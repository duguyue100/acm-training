#include<iostream>

using namespace std;

int a[1001]={0};

int main(void)
{
	int n=0, m=0;
	cin >> n >> m;

	for (int i=1;i<=n;i++)
		cin >> a[i];
	
	m=m%n+1;

	int b[11]={0};
	for (int i=1;i<=10;i++)
	{
		if (m<=n)
		{
			b[i]=a[m];
			m++;
		}
		else
		{
			m=1;
			b[i]=a[m];
			m++;
		}
	}

	for (int i=1;i<=10;i++) cout << b[i];
		
	return 0;
}