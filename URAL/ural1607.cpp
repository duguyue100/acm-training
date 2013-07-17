#include<iostream>

using namespace std;

int main(void)
{
	int a=0, b=0, c=0, d=0;
	cin >> a >> b >> c >> d;

	while (a+b<c)
	{
		a+=b;
		c-=d;
	}

	if (c>a)
		cout << c;
	else cout << a;

	cin >> a;

	return 0;
}