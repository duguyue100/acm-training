/*
ID: duguyue1
TASK: combo
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int N=0;
int a1=0, a2=0, a3=0;
int b1=0, b2=0, b3=0;

bool check(int n1, int n2, int n3)
{
	bool fflag=true;

	int t1=abs(n1-a1);
	int t2=abs(n2-a2);
	int t3=abs(n3-a3);

	if (t1>2 && (N-t1)>2)
		fflag=false;
	else if (t2>2 && (N-t2)>2)
		fflag=false;
	else if (t3>2 && (N-t3)>2)
		fflag=false;

	bool mflag=true;

	t1=abs(n1-b1);
	t2=abs(n2-b2);
	t3=abs(n3-b3);

	if (t1>2 && (N-t1)>2)
		mflag=false;
	else if (t2>2 && (N-t2)>2)
		mflag=false;
	else if (t3>2 && (N-t3)>2)
		mflag=false;

	if (fflag || mflag)
		return true;
	else return false;
}

int main(void)
{
	freopen("combo.in", "r", stdin);
	freopen("combo.out", "w", stdout);

	cin >> N;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;

	long count=0;
	for (int i=1;i<=N;i++)
		for (int j=1;j<=N;j++)
			for (int k=1;k<=N;k++)
			{
				if (check(i,j,k))
					count++;
			}

	cout << count << endl;


	return 0;
}



