#include<iostream>
#include<cstdio>

using namespace std;

int N=0;

bool prime(int n)
{
	if (n<2) return false;
	if (n<=3) return true;
	if (!(n%2) || !(n%3)) return false;
	for (int i=5;i*i<=n;i+=6)
		if (!(n%i) || !(n%(i+2))) return false;
	return true;
}

int main(void)
{
	while (cin >> N && N)
	{
		for (int b=2;b<N;b++)
		{
			if (prime(b) && prime(N-b))
			{
				cout << N << " = " << b << " + " << N-b << endl;
				break;
			}
		}
	}

	return 0;
}
