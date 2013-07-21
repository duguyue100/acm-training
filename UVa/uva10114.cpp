#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int month=0, t=0;
	double downPayment=0, amount=0;

	cin >> month >> downPayment >> amount >> t;

	while (month>0)
	{
		int output=0;
		int m=0;
		double p=0;
		double a[101]={0};
		double monthlyPayment=amount/month;

		for (int i=1;i<=t;i++)
		{
			cin >> m >> p;
			for (int j=m;j<101;j++)
				a[j]=p;
		}

		m=0;p=a[m];
		double amount1=(amount+downPayment)*(1-p);
		double amount2=amount;
		while (amount1<=amount2)
		{
			output++;
			amount1=amount1*(1-a[output]);
			amount2=amount2-monthlyPayment;
		}

		cout << output << " month";
		if (output!=1)
			cout << "s";
		cout << endl;

		cin >> month >> downPayment >> amount >> t;
	}

	return 0;
}