#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int n=0;
bool flag=true;

int check()
{
	int wl, dl, wr, dr;
	cin >> wl >> dl >> wr >> dr;

	if (wl==0) wl=check();
	if (wr==0) wr=check();

	if (wl*dl!=wr*dr) flag=false;

	return wl+wr;
}

int main(void)
{
	scanf("%d", &n);

	for (int i=1;i<=n;i++)
	{
		flag=true;
		check();

		if (flag==true)
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;

		if (i!=n) cout << endl;
	}
	return 0;
}

