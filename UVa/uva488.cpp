/*
 * uva488.cpp
 *
 *  Created on: Sep 26, 2013
 *      Author: dgyHome
 */


#include<iostream>

using namespace std;

void generateWave(int a)
{
	if (a==1) cout << 1;
	else{
		for (int i=1;i<=a;i++)
		{
			for (int j=1;j<=i;j++) cout << i;
			cout << endl;
		}
		for (int i=a-1;i>=2;i--)
		{
			for (int j=1;j<=i;j++) cout << i;
			cout << endl;
		}
		cout << 1;
	}
}

void process(int a, int f)
{
	for (int i=1;i<f;i++)
	{
		generateWave(a);
		cout << endl << endl;
	}
	if (f!=0)
		generateWave(a);
}

int main(void)
{
	freopen("input.in","r",stdin);
	int n=0;
	cin >> n;

	for (int i=1;i<n;i++)
	{
		int a=0,f=0;
		cin >> a >> f;

		process(a,f);
		if (f!=0)
			cout << endl << endl;
		else cout << endl;
	}

	int a=0,f=0;
	cin >> a >> f;
	if (f!=0)
	{
		process(a,f);
		cout << endl;
	}

	return 0;
}
