#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	char ch;

	long sum=0;
	int max=0;
	while (scanf("%c", &ch)!=EOF)
	{
		long t=0;
		if ((ch>='0' && ch<='9') || (ch>='A' && ch<='Z'))
		{
			if (ch<='9')
				t=(int)(ch-'0');
			else t=(int)(ch-'A'+10);
		}
		sum+=t;
		if (t>max) max=t;
		
	}
	max++;
	if (max<2) max=2;
	int i=max;
	for (i=max;i<=36;i++)
	{
		if (sum%(i-1)==0)
			break;
	}
	if (i>36) cout << "No solution." << endl;
	else cout << i << endl;
	return 0;
}