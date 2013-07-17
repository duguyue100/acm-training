#include<iostream>
#include<cmath>

using namespace std;


int main(void)
{
	long long N=0;
	cin >> N;

	int P=(int)sqrt((double)2*N);
	int A=0;
	for (int i=P;i>=0;i--)
	{
		A=(N-i*(i-1)/2)/i;
		if (i*(i-1)/2+A*i==N)
		{
			P=i;
			break;
		}
	}

	cout << A << " " << P;

	return 0;
}