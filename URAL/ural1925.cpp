#include<iostream>

using namespace std;

int main(void)
{
	int n=0, k=0;
	cin >> n >> k;
	
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		int a=0, b=0;
		cin >> a >> b;
		sum+=(a-b);
	}

	int x=k-2*(n+1)+sum;
	if (x>0) cout << x;
	else cout << "Big Bang!";
}