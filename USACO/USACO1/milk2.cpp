/*
ID: duguyue1
TASK: milk2
LANG: C++
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	bool a[2000002]={0};

	ifstream fin("milk2.in");
	ofstream fout("milk2.out");

	int n=0;
	fin >> n;

	int min=1000000;
	int max=-1;
	for(int i=1;i<=n;i++)
	{
		int start=0, end=0;

		fin >> start >> end;

		if (start*2<min) min=start*2;
		if (2*end-1>max) max=2*end-1;

		for (int j=start*2;j<2*end;j++) if (a[j]==false) a[j]=true;
	}

	int maxmilking=0;
	int maxidle=0;
	for (int i=min;i<=max;i++)
	{
		int count1=0;
		int count2=0;
		while (a[i]==true)
		{
			count1++;
			i++;
			if (a[i+1]==false) break;
		}

		while (a[i]==false)
		{
			count2++;
			i++;
			if (a[i+1]==true) break;
		}
		if (count2!=0)
			count2+=2;
		if (count1/2+1>maxmilking) maxmilking=count1/2+1;
		if (count2/2>maxidle) maxidle=count2/2;
	}

	fout << maxmilking << " " << maxidle << endl;

	return 0;
}
