/*
 * uva11679.cpp
 *
 *  Created on: Oct 14, 2013
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
		int B,N;
		cin >> B >> N;

		if (B==0 && N==0) break;

		int a[10001]={0};

		for (int i=1;i<=B;i++)
			cin >> a[i];

		for (int i=1;i<=N;i++)
		{
			int n1, n2, m;
			cin >> n1 >> n2 >> m;
			a[n1]-=m;
			a[n2]+=m;
		}

		bool flag=true;
		for (int i=1;i<=B;i++)
		{
			if (a[i]<0)
			{
				flag=false;
				break;
			}
		}

		if (flag==true) cout << "S" << endl;
		else cout << "N" << endl;
	}
	return 0;
}
