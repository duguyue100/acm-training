/*
 * uva661.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main(void)
{
	int counter=1;
	while (1)
	{
		int n=0, m=0, c=0;
		cin >> n >> m >> c;

		if (n==0 && m==0 && c==0) break;

		int a[21]={0};
		bool b[21]={0};

		for (int i=1;i<=n;i++) cin >> a[i];

		int max=-1;
		bool flag=true;
		int current=0;
		for (int i=1;i<=m;i++)
		{
			int t=0;
			cin >> t;
			if (b[t]==false)
			{
				current+=a[t];
				b[t]=true;
			}
			else
			{
				current-=a[t];
				b[t]=false;
			}

			if (current>c)
				flag=false;
			else if (current>max && current<=c)
				max=current;
		}

		if (flag==true)
		{
			cout << "Sequence " << counter << endl;
			cout << "Fuse was not blown." << endl;
			cout << "Maximal power consumption was " << max << " amperes." << endl;
		}
		else
		{
			cout << "Sequence " << counter << endl;
			cout << "Fuse was blown." << endl;
		}

		cout << endl;

		counter++;
	}
	return 0;
}
