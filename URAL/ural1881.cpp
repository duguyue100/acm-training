#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int h=0,w=0,n=0;

	cin >> h >> w >> n;

	int l=0,k=0; int sum=0;
	for (int i=1;i<=n;i++)
	{
		string t="";
		cin >> t;

		if (sum+t.length()<w)
			sum=sum+t.length()+1;
		else if (sum+t.length()==w)
		{
			l++;
			sum=0;
		}
		else if (sum+t.length()>w)
		{
			l++;
			sum=t.length();
			if (sum<w) sum++;
		}
	}

	if (sum<=w && sum>0) l++;

	if (l%h==0)
		cout << l/h;
	else cout << l/h+1;

	cin >> h;

	return 0;
}