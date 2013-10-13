/*
 * uva11364.cpp
 *
 *  Created on: Oct 13, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<queue>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(void)
{
	int t=0;
	cin >> t;

	for (int i=1;i<=t;i++)
	{
		priority_queue<int> a;
		int n=0; cin >> n;

		for (int j=1;j<=n;j++)
		{
			int temp=0; cin >> temp;
			a.push(temp);
		}

		int sum=0;

		for (int j=1;j<n;j++)
		{
			int n1=a.top();
			a.pop();
			sum+=(n1-a.top())*2;
		}
		cout << sum << endl;
	}

	return 0;
}
