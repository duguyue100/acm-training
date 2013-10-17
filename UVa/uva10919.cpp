/*
 * uva10919.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(void)
{
	while (1)
	{
		int n=0;
		cin >> n;
		if (n==0) break;
		int m=0;
		cin >> m;

		bool a[10000]={0};
		for (int i=1;i<=n;i++)
		{
			int temp=0; cin >> temp;
			a[temp]=true;
		}

		bool flag=true;
		for (int i=1;i<=m;i++)
		{
			int c=0, r=0;
			cin >> c >> r;
			int counter=0;
			for (int j=1;j<=c;j++)
			{
				int temp=0; cin >> temp;
				if (a[temp]==true)
					counter++;
			}

			if (counter<r) flag=false;
		}

		if (flag==true) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
