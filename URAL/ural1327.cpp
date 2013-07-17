#include<iostream>

using namespace std;

int main(void)
{
	int a=0, b=0;
	cin >> a >> b;

	if (a%2==1 && b%2==1)
		cout << (b-a+1)/2+1;
	else if (a%2==1 && b%2==0)
		cout << (b-a+1)/2;
	else if (a%2==0 && b%2==1)
		cout << (b-a+1)/2;
	else if (a%2==0 && b%2==0)
		cout << (b-a)/2;

	return 0;
}