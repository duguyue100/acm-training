#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
	vector<string> s;
	vector<string> h;
	vector<string> g;
	vector<string> r;

	int n=0;
	cin >> n;
	int sc=1, hc=1, gc=1, rc=1;
	string st1;
	getline(cin,st1);
	for (int i=1;i<=n;i++)
	{
		string st;
		getline(cin,st);
		string college="";
		getline(cin,college);
		if (college=="Gryffindor")
		{
			g.push_back(st);
			gc++;
		}
		else if (college=="Hufflepuff")
		{
			h.push_back(st);
			hc++;
		}
		else if (college=="Slytherin")
		{
			s.push_back(st);
			sc++;
		}
		else if (college=="Ravenclaw")
		{
			r.push_back(st);
			rc++;
		}
	}

	cout << "Slytherin:" << endl;
	for (int i=0;i<sc-1;i++) cout << s[i] << endl;
	cout << endl;
	cout << "Hufflepuff:" << endl;
	for (int i=0;i<hc-1;i++) cout << h[i] << endl;
	cout << endl;
	cout << "Gryffindor:" << endl;
	for (int i=0;i<gc-1;i++) cout << g[i] << endl;
	cout << endl;
	cout << "Ravenclaw:" << endl;
	for (int i=0;i<rc-1;i++) cout << r[i] << endl;

	return 0;
}