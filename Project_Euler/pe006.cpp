#include<iostream>

using namespace std;

int main(void)
{
	long sum1=5050*5050;

	long sum2=0;
	for (int i=1;i<=100;i++)
	{
		sum2+=i*i;
	}

	cout << sum1-sum2 << endl;

	cin >> sum1;
}