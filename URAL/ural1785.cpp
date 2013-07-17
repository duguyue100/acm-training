#include<iostream>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;
	if (n>=1 && n<=4)
		cout << "few";
	else if (n>=5 && n<=9)
		cout << "several";
	else if (n>=10 && n<=19)
		cout << "pack";
	else if (n>=20 && n<=49)
		cout << "lots";
	else if (n>=50 && n<=99)
		cout << "horde";
	else if (n>=100 && n<=249)
		cout << "throng";
	else if (n>=250 && n<=499)
		cout << "swarm";
	else if (n>=500 && n<=999)
		cout << "zounds";
	else if (n>=1000)
		cout << "legion";
	return 0;
}