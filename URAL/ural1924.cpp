#include<iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	n=(1+n)*n/2;

	if (n%2==1) cout << "grimy";
	else if (n%2==0) cout << "black";

	return 0;
}