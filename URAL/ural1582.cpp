#include<iostream>

using namespace std;

int main(void)
{
	double x, y, z;
	cin >> x >> y >> z;

	cout << (int)(1000/(y/z+y/x+1)*y+0.5);

	return 0;
}