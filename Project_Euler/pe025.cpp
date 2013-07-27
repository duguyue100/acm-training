#include<iostream>
#include<cmath>

using namespace std;

int a[2000]={0};
int b[2000]={0};
int c[2000]={0};

int plus(int l1)
{
	int l=l1;
	for (int i=0;i<l;i++)
	{
		a[i]=a[i]+b[i]+c[i];
		if (a[i]>=10)
			a[i+1]++;
		a[i]=a[i]%10;
	}
	if (a[l]!=0) l++;

	return l;
}

void cequalb(int lb)
{
	for (int i=0;i<lb;i++)
		c[i]=b[i];
}

void bequala(int la)
{
	for (int i=0;i<la;i++)
		b[i]=a[i];
}

void emptya(int la)
{
	for (int i=0;i<la;i++)
		a[i]=0;
}

int main(void)
{
	b[0]=1; int lb=1;
	c[0]=1; int lc=1;

	int counter=3;

	int la=plus(lb);
	cequalb(lb);
	lc=lb;
	bequala(la);
	lb=la;
	emptya(la);

	while (lb<1000)
	{
		la=plus(lb);
		cequalb(lb);
		lc=lb;
		bequala(la);
		lb=la;
		emptya(la);
		counter++;
		if (counter%50==0)
		{
			cout << counter << ": " << lb << ": ";
			for (int i=lb-1;i>=0;i--) cout << b[i];
			cout << endl;
		}
	}

	cout << counter << endl;

	return 0;
}