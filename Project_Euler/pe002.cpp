#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	long first=0;
	long second=1;
	long rest=first+second;
	
	long sum=0;
	while (rest<=4000000)
	{
		if (rest%2==0)
			sum+=rest;
		
		first=second;
		second=rest;
		rest=first+second;
	}

	cout << sum << endl;
	cin >> first;
}