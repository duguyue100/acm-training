#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string st="";
	cin >> st;

	char seat=st[st.length()-1];

	string str="";
	for (int i=0;i<st.length()-1;i++) str+=st[i];
	int n=stoi(str);

	if (n>=1 && n<=2)
	{
		if (seat=='A' || seat=='D') cout << "window";
		else if (seat=='B' || seat=='C') cout << "aisle";
	}
	else if (n>=3 && n<=20)
	{
		if (seat=='A' || seat=='F') cout << "window";
		else if (seat=='B' || seat=='C' || seat=='D' || seat=='E') cout << "aisle";
	}
	else if (n>=21 && n<=65)
	{
		if (seat=='A' || seat=='K') cout << "window";
		else if (seat=='C' || seat=='D' || seat=='G' || seat=='H') cout << "aisle";
		else if (seat=='B' || seat=='E' || seat=='F' || seat=='J') cout << "neither";
	}

	cin >> n;

	return 0;
}