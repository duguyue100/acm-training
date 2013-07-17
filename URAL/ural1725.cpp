#include<iostream>

using namespace std;

int main(void)
{
	int n=0,k=0;
	cin >> n >> k;

	if (n==2)
	{
		cout << 0;
		return 0;
	}
	else{
		if (k>(n/2)) k=n-k+1;
		cout << n-k-2;
		return 0;
	}

	return 0;
}