#include<iostream>

using namespace std;

int main(void)
{
	int n=0, m=0;
	cin >> n >> m;
	if (n*m%2==0)
		cout << "[:=[first]";
	else cout << "[second]=:]";

	return 0;
}