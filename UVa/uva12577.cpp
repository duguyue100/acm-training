#include<iostream>
#include<cstdio>

using namespace std;

string str="";

int main(void)
{
	int counter=1;
	while (cin >> str && str!="*")
	{
		if (str=="Hajj")
			cout << "Case " << counter << ": Hajj-e-Akbar" << endl;
		else cout << "Case " << counter << ": Hajj-e-Asghar" << endl;

		counter++;
	}

	return 0;
}
