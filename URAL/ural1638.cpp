#include<iostream>

using namespace std;

int main(void)
{
	int a=0, b=0, c=0, d=0;

	cin >> a >> b >> c >> d;
	
	int sum=0;
	if (c<d)
	{
		sum+=(d-c-1)*(a+2*b);
		sum+=2*b;
	}
	else if (c>=d)
	{
		sum+=(c-d)*(a+2*b);
		sum+=a;
	}

	cout << sum;
	return 0;
}