#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int a[10000]={0};

int main(void)
{
	string st="";
	ifstream input("input.in");

	if (input.is_open())
	{
		while (input.good())
		{
			getline(input,st);
			int b[50];

			for (int i=0;i<st.length();i++) b[st.length()-i-1]=st[i]-'0';
			
			for (int i=0;i<st.length();i++){a[i]=a[i]+b[i];if (a[i]>=10) a[i+1]++;a[i]=a[i]%10;}

			cout << "number: " << st << endl;
			cout << "sum: ";
			for (int i=100;i>=0;i--) cout << a[i];
			cout << endl;
		}
		input.close();
	}
	else cout << "unable to open file";

	cin >> st;

	return 0;
}