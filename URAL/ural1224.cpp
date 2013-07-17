#include<iostream>

using namespace std;

int main(void)
{
	long long n=0, m=0;
	cin >> n >> m;
	
	if (n==1) cout << 0;
	else if (n>1)
	{
		if (n<=m) cout << (n-1)*2;
		else if (n>m) cout << m*2-1;
	}

	return 0;
}

// size of your data type.