/*
ID: duguyue1
TASK: zerosum
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int N;

void dfs(int n, int sum, int num, string s)
{
	if (n==N)
	{
		if (sum+num==0)
			cout << s << endl;
		return ;
	}

	if (num>0)
		dfs(n+1, sum, num*10+n+1, s+" "+(char)(n+1+'0'));
	else dfs(n+1, sum, num*10-n-1, s+" "+(char)(n+1+'0'));

	dfs(n+1, sum+num, n+1, s+"+"+char(n+1+'0'));
	dfs(n+1, sum+num, -1*n-1, s+"-"+char(n+1+'0'));
}

int main(void)
{
	freopen("zerosum.in", "r", stdin);
	freopen("zerosum.out", "w", stdout);

	cin >> N;

	dfs(1,0,1,"1");

	return 0;
}



