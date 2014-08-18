/*
ID: duguyue1
TASK: milk3
LANG: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int A=0, B=0, C=0;

bool a[21][21][21];

bool check(int i, int j, int k)
{
	if (a[i][j][k]==true)
		return true;
	else return false;
}

void search(int i, int j, int k, int depth)
{
	if (!check(i,j,k))
		a[i][j][k]=true;

	if (depth<31)
	{
		// a -> b
		if (i+j>B && !check(i-(B-j), B, k)) search(i-(B-j), B, k, depth+1);
		else if (!check(0, i+j, k)) search(0, i+j, k, depth+1);

		// a -> c
		if (i+k>C && !check(i-(C-k), j, C)) search(i-(C-k), j, C, depth+1);
		else if (!check(0, j, i+k)) search(0, j, i+k, depth+1);

		// b -> a
		if (j+i>A && !check(A, j-(A-i), k)) search(A, j-(A-i), k, depth+1);
		else if (!check(j+i, 0, k)) search(j+i, 0, k, depth+1);

		// b -> c
		if (j+k>C && !check(i, j-(C-k), C)) search(i, j-(C-k), C, depth+1);
		else if (!check(i, 0, j+k)) search(i, 0, j+k, depth+1);

		// c -> a
		if (k+i>A && !check(A, j, k-(A-i))) search(A, j, k-(A-i), depth+1);
		else if (!check(k+i, j, 0)) search(k+i, j, 0, depth+1);

		// c -> b
		if (k+j>B && !check(i, B, k-(B-j))) search(i, B, k-(B-j), depth+1);
		else if (!check(i, k+j, 0)) search(i, k+j, 0, depth+1);
	}
}

int main(void)
{
	freopen("milk3.in", "r", stdin);
	freopen("milk3.out", "w", stdout);
	cin >> A >> B >> C;

	search(0,0,C,0);

	bool s[21]={0};
	for (int i=0;i<=B;i++)
		for (int j=0;j<=C;j++)
			if (check(0, i, j) && !s[j])
				s[j]=true;

	for (int i=0;i<C;i++)
		if (s[i]==true)
			cout << i << " ";
	cout << C << endl;

	return 0;
}




