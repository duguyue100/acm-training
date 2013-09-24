/*
 * ural1306.cpp
 *
 * Use priority queue to find median in O(N)
 *
 */

#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

int main(void)
{
	priority_queue<unsigned int> q;

	int n=0;
	cin >> n;

	for (int i=1;i<=n/2+1;i++)
	{
		int t=0; cin >> t;
		q.push(t);
	}

	for (int i=n/2+2;i<=n;i++)
	{
		int t=0; cin >> t;
		q.push(t);
		q.pop();
	}

	if (n%2==1) printf("%.1f\n", (double)q.top());
	else
	{
		unsigned int n1=q.top();
		q.pop();
		unsigned int n2=q.top();
		q.pop();

		printf("%.1f\n", (double)(n1+n2)/2.0);
	}

	return 0;
}


