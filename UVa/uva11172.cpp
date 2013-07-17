#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int n=0;
	cin >> n;
	double a,b;
	for (int i=1;i<=n;i++)
	{
		cin >> a >> b;
		if (a>b)
			cout << '>' << endl;
		else if (a<b)
			cout << '<' << endl;
		else if (a==b)
			cout << '=' << endl;
	}

	return 0;
}