#include<iostream>

using namespace std;

int main(void)
{
	long x=0, y=0;
	cin >> x >> y;

	if (x<=0 || y<=0)
		cout << x << " " << y;
	else if ((x+y)%2==1)
		cout << y << " " << x;
	else if ((x+y)%2==0)
		cout << x << " " << y;

	return 0;
}