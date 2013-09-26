/*
 * uva694.cpp
 *
 *  Created on: Sep 26, 2013
 *      Author: dgyHome
 */


#include<iostream>

using namespace std;

long long compute(long long n1, long long n2)
{
	long long temp=n1;
	long long count=0;

	while (temp!=1)
	{
		if (temp%2==0) temp/=2;
		else
		{
			if (3*temp+1<=n2)
				temp=3*temp+1;
			else return count+1;
		}
		count++;
	}

	return count+1;
}

int main(void)
{
	long long n1, n2;
	cin >> n1 >> n2;

	long count=1;
	while (n1!=-1 && n2!=-1)
	{
		cout << "Case " << count << ": A = " << n1 << ", limit = "
				<< n2 << ", number of terms = ";

		cout << compute(n1, n2) << endl;

		cin >> n1 >> n2;
		count++;
	}

	return 0;
}

