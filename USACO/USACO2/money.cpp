/*
ID: duguyue1
TASK: money
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

long V, N;
long long v[30];
long long f[10050];

int main(void)
{
	freopen("money.in", "r", stdin);
	freopen("money.out", "w", stdout);

	cin >> V >> N;

	for (long i=1;i<=V;i++) cin >> v[i];

	f[0]=1;
	for (long long i=1;i<=V;i++)
		for (long long j=v[i]; j<=N; j++)
			f[j]+=f[j-v[i]];

	cout << f[N] << endl;

	return 0;
}
