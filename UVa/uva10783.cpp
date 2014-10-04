#include<iostream>
#include<cstdio>

using namespace std;

int T=0;

int main(void)
{
	cin >> T;
	for (int cases=1;cases<=T;cases++)
	{
		int sum=0, a, b;

		cin >> a >> b;
		if (a%2==0) a++;

		for (int i=a;i<=b;i+=2)
			sum+=i;

		cout << "Case " << cases << ": " << sum << endl;
	}

	return 0;
}
