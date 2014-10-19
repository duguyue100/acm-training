#include<iostream>
#include<cstdio>

using namespace std;

long a, b, c;
int t;

int main(void)
{
	cin >> t;
	for (int count=1;count<=t;count++)
	{
		cin >> a >> b >> c;

		cout << "Case " << count << ": ";
		if (a+b<=c || a+c<=b || b+c<=a)
		{
			cout << "Invalid" << endl;
		}
		else{
			if (a==b && b==c && a==c)
			{
				cout << "Equilateral" << endl;
			}
			else if (a!=b && b!=c && a!=c)
			{
				cout << "Scalene" << endl;
			}
			else if (((a==b)&&(a!=c)) ||
					 ((a==c)&&(a!=b)) ||
					 ((b==c)&&(b!=a)))
			{
				cout << "Isosceles" << endl;
			}
		}
	}
	return 0;
}
