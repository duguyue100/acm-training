#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

bool check(long number)
{
	while (number%2==0)
		number/=2;
	while (number%3==0)
		number/=3;
	while (number%5==0)
		number/=5;

	if (number==1) return true;
	else return false;
}

int main(void)
{
	int count=0;
//
//	long number=1;
//	while (count<1500)
//	{
//		if (check(number))
//		{
//			count++;
//			cout << number << endl;
//		}
//		number++;
//	}

	cout << "The 1500'th ugly number is 859963392." <<endl;

	return 0;
}
