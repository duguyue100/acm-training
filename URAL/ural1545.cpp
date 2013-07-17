#include<iostream>
#include<string>

using namespace std;

struct index{
	int k;
	string id[1000];
	index()
	{
		k=0;
	}
}a[26];

int main(void)
{
	int n=0;
	cin >> n;

	for (int i=1;i<=n;i++)
	{
		string st="";
		cin >> st;
		a[st[0]-'a'].k++;
		a[st[0]-'a'].id[a[st[0]-'a'].k]=st;
	}

	char ch;
	cin >> ch;

	for (int i=1;i<=a[ch-'a'].k;i++)
		cout << a[ch-'a'].id[i] << endl;

	return 0;
}