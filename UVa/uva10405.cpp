#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string a, b;

int dp[2000][2000];
int lcs(const string &s, const string &t)
{
	int m = s.size(), n = t.size();
	if (m == 0 || n == 0) return 0;
	for (int i=0; i<=m; ++i)
		dp[i][0] = 0;
	for (int j=1; j<=n; ++j)
		dp[0][j] = 0;
	for (int i=0; i<m; ++i)
		for (int j=0; j<n; ++j)
			if (s[i] == t[j])
				dp[i+1][j+1] = dp[i][j]+1;
			else
				dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
	return dp[m][n];
}

int main(void)
{


//	int c[3000]={0};
//	int count=0;
	while (getline(cin, a) && getline(cin, b))
	{
//		c[count]=lcs(a,b);
//		count++;
		cout << lcs(a,b) << endl;
	}

//	for (int i=0;i<count-1;i++)
//		cout << c[i] << endl;
//	cout << c[count-1];

	return 0;
}
