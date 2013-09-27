/*
ID: duguyue1
TASK: friday
LANG: C++
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	ifstream fin("friday.in");
	ofstream fout("friday.out");

	int a[8]={0};
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	int n=0;
	fin >> n;

	int day=13;
	int week=6;
	a[week]++;
	for (int i=1900;i<1900+n;i++)
	{
		if (i%100==0 && i%400==0)
		{
			for (int j=1;j<=12;j++)
			{
				if (j==2)
					day+=29;
				else day+=month[j];

				week=day%7;
				a[week]++;
			}
		}
		else if (i%4==0 && i%100!=0)
		{
			for (int j=1;j<=12;j++)
			{
				if (j==2)
					day+=29;
				else day+=month[j];

				week=day%7;
				a[week]++;
			}
		}
		else
		{
			for (int j=1;j<=12;j++)
			{
				day+=month[j];

				week=day%7;
				a[week]++;
			}
		}
	}

	a[week]--;

	fout << a[6] << " " << a[0] << " ";
	for (int i=1;i<5;i++)
		fout << a[i] << " ";
	fout << a[5] << endl;

	return 0;
}
