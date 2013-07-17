#include<iostream>
#include<cmath>

using namespace std;

int count(long long sum)
{
	int counter=0;
	for (int i=1;i<=sum;i++)
	{
		if (sum%i==0)
			counter++;
	}

	return counter;
}

int main(void)
{
	long long sum=55;


	long long i=1;
	long long result=0;
	while(1)
	{
		long long counter=0;
		if (i%2==1)
		{
			counter=count(i)*count((i+1)/2);
		}
		else if (i%2==0)
		{
			counter=count(i/2)*count(i+1);
		}

		if (counter>500)
		{
			result=(i*(i+1))/2;
			break;
		}

		i++;
	}

	cout << result;

	cin >> sum;
	return 0;
}