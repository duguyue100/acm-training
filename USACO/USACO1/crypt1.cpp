/*
ID: duguyue1
TASK: crypt1
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int n=0;
int a[11]={0};

bool check(int num)
{
	int temp=num;

	while (temp!=0)
	{
		int r=temp%10;

		bool flag=false;
		for (int i=0;i<n;i++)
			if (a[i]==r)
			{
				flag=true;
				break;
			}
		if (flag==false) return false;

		temp/=10;
	}

	return true;
}

int main(void)
{
	freopen("crypt1.in", "r", stdin);
	freopen("crypt1.out", "w", stdout);

	cin >> n;

	for (int i=0;i<n;i++)
		cin >> a[i];

	int count=0;

	for (int i=0;i<n;i++) // first digit
		for (int j=0;j<n;j++) // second digit
			for (int k=0;k<n;k++) // third digit
				for (int t=0;t<n;t++) // fourth dight
					for (int d=0; d<n; d++) // fifth digit
					{
						int num1=a[k]*a[d]+a[j]*a[d]*10+a[i]*a[d]*100;
						int num2=a[k]*a[t]+a[j]*a[t]*10+a[i]*a[t]*100;
						int num3=num1+num2*10;

						if (num1/1000==0 && num2/1000==0 && num3/10000==0 &&
							check(num1) && check(num2) && check(num3))
							count++;
					}

	cout << count << endl;

	return 0;
}
