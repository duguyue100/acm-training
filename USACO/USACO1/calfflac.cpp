/*
ID: duguyue1
TASK: calfflac
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<cstdio>

using namespace std;

int main(void)
{
	freopen("calfflac.in","r",stdin);
	freopen("calfflac.out","w",stdout);

	char a[20005], b[20005], c;

	// preprocessing
	int counter_a=0, counter_b=0, ba[20005];
	while (scanf("%c", &c)!=EOF)
	{
		a[counter_a]=c;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			b[counter_b]=c;
			if (b[counter_b]>='A' && b[counter_b]<='Z')
				b[counter_b]+='a'-'A';

			ba[counter_b]=counter_a; // relation between b and a
			counter_b++;
		}
		counter_a++;
	}

	// loop through

	int longest=1;
	int start=0;
	int end=0;

	for (int i=1;i<counter_b;i++)
	{
		int templen=0;
		int temp_start=i, temp_end=i;
		// i as center
		// odd length, even length

		// odd length
		for (int j=i-1; j>=0;j--)
		{
			if (2*i-j<=counter_b && b[j]!=b[2*i-j])
			{
				temp_start=j;
				temp_end=2*i-j;
				break;
			}
			else if (2*i<=counter_b && j==0)
			{
				if (b[0]==b[2*i])
				{
					temp_start=-1;
					temp_end=2*i+1;
				}
			}
		}

		templen=temp_end-temp_start-1;

		// even length
		if (b[i]==b[i-1])
		{
			for (int j=i-2;j>=0;j--)
			{
				if (j>=0 && 2*i-j-1<=counter_b && b[j]!=b[2*i-j-1])
				{
					if (2*i-2*j-2>templen)
					{
						temp_start=j;
						temp_end=2*i-j-1;
					}
					break;
				}
				else if (2*i-j-1<=counter_b && j==0)
				{
					if (b[0]==b[2*i-1])
					{
						temp_start=-1;
						temp_end=2*i+1;
					}
				}
			}
		}

		// find length

		templen=temp_end-temp_start-1;

		// replace
		if (templen>longest)
		{
			longest=templen;
			start=temp_start+1;
			end=temp_end-1;
		}
	}

	cout << longest << endl;
	for (int i=ba[start]; i<=ba[end]; i++)
		cout << a[i];
	cout << endl;

	return 0;
}



