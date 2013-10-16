/*
 * swapCPP.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdlib>

using namespace std;

inline void swap(int& i, int& j)
{
	int temp=i;
	i=j;
	j=temp;
}

inline void swap(double& i, double& j)
{
	double temp=i;
	i=j;
	j=temp;
}

int main(void)
{
	int n1, n2;
	cin >> n1 >> n2;

	swap(n1,n2);

	cout << n1 << " " << n2;

	return 0;
}
