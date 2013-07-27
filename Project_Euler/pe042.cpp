#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string a[3000];

int str_proc(string st)
{
	int sum=0;
	for (int i=0;i<st.length();i++)
		sum+=(int)st[i]-'A'+1;

	return sum;
}

int main(void)
{
	freopen("words.txt","r",stdin);

	cout << str_proc("SKY") << endl;

	string st="";
	cin >> st;
	string b="\",\"";
	st=st.substr(1,st.length()-2);

	int pos=st.find(b);
	int count=1;
	while (pos!=-1)
	{
		a[count]=st.substr(0,pos);
		st.erase(0,pos+b.length());
		count++;
		pos=st.find(b);
	}

	a[count]=st;

	int sum=0;

	for (int i=1;i<=count;i++)
	{
		int t=str_proc(a[i]);
		
		int t1=(int)(-1+sqrt((double)1+4*2*t))/2;
		if (t1*(t1+1)/2==t)
			sum++;
	}

	return 0;
}