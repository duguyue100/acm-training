#include<iostream>
#include<cstdio>

using namespace std;

int a[12]={0};
int b[12]={0};

string num1="", num2="";

int main(void)
{
	while (cin >> num1 >> num2 && !(num1=="0" && num2=="0"))
	{
		fill_n(a,12,0); fill_n(b,12,0);

		size_t l=num1.length(); if (l<num2.length()) l=num2.length();

		for (size_t i=0;i<num1.length();i++)
			a[num1.length()-i]=(int)(num1[i]-'0');
		for (size_t i=0;i<num2.length();i++)
			b[num2.length()-i]=(int)(num2[i]-'0');

		int counter=0;
		for (size_t i=1;i<=l;i++)
		{
			a[i]+=b[i];
			if (a[i]>=10)
			{
				counter++;
				a[i+1]++;
				a[i]-=10;
			}
		}

		if (counter==0) cout << "No carry operation." << endl;
		else if (counter==1) cout << "1 carry operation." << endl;
		else cout << counter << " carry operations." << endl;
	}

	return 0;
}
