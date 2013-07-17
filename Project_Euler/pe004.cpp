#include<iostream>
#include<string>

using namespace std;

int vaild(long n)
{
	long t=n;
	string st="";
	while (t!=0)
	{
		int m=t%10;
		char ch=(char)m+'0';
		st=ch+st;
		t/=10;
	}

	int flag=1;
	for (int i=0;i<st.length()/2;i++)
	{
		if (st[i]!=st[st.length()-i-1])
		{
			flag=0;
			break;
		}
	}

	if (flag==1)
		return 1;
	else if (flag==0)
		return 0;
}

int main(void)
{
	long max=-1;
	for (int i=999;i>=100;i--)
		for (int j=999;j>=100;j--)
		{
			long t=i*j;
			if (vaild(t))
			{
				if (t>max)
					max=t;
			}
		}
	
	cout << max << endl;
	cin >> max;
	return 0;
}