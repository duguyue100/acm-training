/*
ID: duguyue1
TASK: ride
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void)
{
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	string s1="";
	string s2="";

	fin >> s1;
	long prod1=1;
	for (int i=0;i<s1.length();i++)
		prod1*=(long)(s1[i]-'A'+1);

	prod1%=47;

	fin >> s2;
	long prod2=1;
	for (int i=0;i<s2.length();i++)
		prod2*=(long)(s2[i]-'A'+1);

	prod2%=47;

	if (prod1==prod2) fout << "GO" << endl;
	else fout << "STAY" << endl;

	return 0;
}
