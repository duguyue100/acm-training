/*
 * uva10812.cpp
 *
 *  Created on: Oct 8, 2013
 *      Author: dgyHome
 */

#include<iostream>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		int a=0, b=0;
		cin >> a >> b;

		if ((a+b)%2==0 && (a-b)%2==0)
		{
			int n1=(a+b)/2;
			int n2=(a-b)/2;

			if (n1>=0 && n2>=0)
				cout << n1 << " " << n2 << endl;
			else cout << "impossible" << endl;
		}
		else cout << "impossible" << endl;
	}

	return 0;
}


