#include<iostream>

using namespace std;

int main(void)
{
	int n=0,k=0;
	cin >> n >> k;

	if (n<=k) cout << 2;
	else cout << (n/k+1)+(n-1+n%k)/k;

	return 0;
}

// this one drives me crazy. totally math question.