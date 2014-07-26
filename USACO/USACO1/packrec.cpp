/*
ID: duguyue1
TASK: packrec
LANG: C++
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

struct Rect{
	int w;
	int h;
}a[5], b[5], state[3000], result[100];

int p[24][4]=
	{{1,2,3,4},{1,2,4,3},{1,3,2,4},{1,3,4,2},{1,4,2,3},{1,4,3,2},
	 {2,1,3,4},{2,1,4,3},{2,3,1,4},{2,3,4,1},{2,4,1,3},{2,4,3,1},
	 {3,1,2,4},{3,1,4,2},{3,2,1,4},{3,2,4,1},{3,4,1,2},{3,4,2,1},
	 {4,1,2,3},{4,1,3,2},{4,2,1,3},{4,2,3,1},{4,3,1,2},{4,3,2,1}
	};
int minimum=999999;
int counter=0;

Rect rotate(Rect r)
{
	Rect temp;
	temp.w=r.h;
	temp.h=r.w;

	return temp;
}

void sort(int l, int r)
{
	int i,j,x;
	Rect y;
	i=l;
	j=r;
	x=result[(l+r)/2].w;
	do
	{
		while (result[i].w<x) i++;
		while (x<result[j].w) j--;
		if (i<=j)
		{
			y=result[i];
			result[i]=result[j];
			result[j]=y;
			i++;
			j--;
		}
	}while (i<=j);

	if (i<r) sort(i,r);
	if (l<j) sort(l,j);
}

void layout1()
{
	int w=0;
	for (int i=0;i<24;i++)
	{
		w=b[p[i][0]].w+b[p[i][1]].w+b[p[i][2]].w+b[p[i][3]].w;

		int max=-1;
		int maxidx=-1;
		for (int j=0;j<4;j++)
			if (b[p[i][j]].h>max)
			{
				max=b[p[i][j]].h;
				maxidx=j;
			}

		if (minimum>=w*b[p[i][maxidx]].h)
		{
			minimum=w*b[p[i][maxidx]].h;
			state[counter].w=w;
			state[counter].h=b[p[i][maxidx]].h;
			counter++;
		}
	}
}

void layout2()
{
	int w=0, h=0;

	for (int i=0;i<24;i++)
	{
		w=b[p[i][0]].w+b[p[i][1]].w+b[p[i][2]].w;
		if (w<b[p[i][3]].w)
			w=b[p[i][3]].w;

		int max=-1;
		int maxidx=-1;
		for (int j=0;j<3;j++)
			if (b[p[i][j]].h>max)
			{
				max=b[p[i][j]].h;
				maxidx=j;
			}
		h=b[p[i][3]].h+b[p[i][maxidx]].h;

		if (minimum>=w*h)
		{
			minimum=w*h;
			state[counter].w=w;
			state[counter].h=h;
			counter++;
		}
	}
}

void layout3()
{
	int w=0, h=0;

	for (int i=0;i<24;i++)
	{
		w=b[p[i][0]].w+b[p[i][1]].w+b[p[i][2]].w;
		if (w<b[p[i][3]].w+b[p[i][2]].w)
			w=b[p[i][3]].w+b[p[i][2]].w;


		if (b[p[i][0]].h>b[p[i][1]].h) h=b[p[i][0]].h;
		else h=b[p[i][1]].h;
		if (h<b[p[i][2]].h-b[p[i][3]].h) h=b[p[i][2]].h-b[p[i][3]].h;

		h+=b[p[i][3]].h;

		if (minimum>=w*h)
		{
			minimum=w*h;
			state[counter].w=w;
			state[counter].h=h;
			counter++;
		}
	}
}

void layout4()
{
	int w=0, h=0;

	for (int i=0; i<24; i++)
	{
		w=b[p[i][2]].w+b[p[i][3]].w;
		if (b[p[i][0]].w>b[p[i][1]].w)
			w+=b[p[i][0]].w;
		else w+=b[p[i][1]].w;

		h=b[p[i][0]].h+b[p[i][1]].h;

		if (h<b[p[i][2]].h) h=b[p[i][2]].h;
		if (h<b[p[i][3]].h) h=b[p[i][3]].h;

		if (minimum>=w*h)
		{
			minimum=w*h;
			state[counter].w=w;
			state[counter].h=h;
			counter++;
		}
	}
}


void layout6()
{
	int w=0, h=0;

	for (int i=0; i<24; i++)
	{

		h = max(b[p[i][0]].h+b[p[i][2]].h, b[p[i][1]].h+b[p[i][3]].h);
		w = b[p[i][0]].w + b[p[i][1]].w;

		/* do 2 and 1 touch? */
		if (b[p[i][0]].h < b[p[i][1]].h)
			w = max(w, b[p[i][2]].w + b[p[i][1]].w);
		/* do 2 and 3 touch? */
		if (b[p[i][0]].h + b[p[i][2]].h > b[p[i][1]].h)
			w = max(w, b[p[i][2]].w + b[p[i][3]].w);
		/* do 0 and 3 touch? */
		if (b[p[i][1]].h < b[p[i][0]].h)
			w = max(w, b[p[i][0]].w + b[p[i][3]].w);

		/* maybe 2 or 3 sits by itself */
		w = max(w, b[p[i][2]].w);
		w = max(w, b[p[i][3]].w);

		if (minimum>=w*h)
		{
			minimum=w*h;
			state[counter].w=w;
			state[counter].h=h;
			counter++;
		}
	}
}

int main(void)
{
	freopen("packrec.in", "r", stdin);
	freopen("packrec.out", "w", stdout);

	int n=4;

	for (int i=0;i<n;i++)
		cin >> a[i].w >> a[i].h;

	// generate permutation

	for (int i=0;i<24;i++) for (int j=0;j<4;j++) p[i][j]--;

	for (int i=0;i<2;i++)
		for (int j=0;j<2;j++)
			for (int k=0;k<2;k++)
				for (int t=0;t<2;t++)
				{
					// form search space

					if (i==1) b[0]=rotate(a[0]);
					else b[0]=a[0];

					if (j==1) b[1]=rotate(a[1]);
					else b[1]=a[1];

					if (k==1) b[2]=rotate(a[2]);
					else b[2]=a[2];

					if (t==1) b[3]=rotate(a[3]);
					else b[3]=a[3];

					// state 1

					layout1();
					layout2();
					layout3();
					layout4();
					layout6();

				}

	cout << minimum << endl;

	int reCount=0;
	for (int i=0; i<counter; i++)
	{
		if (state[i].w>state[i].h)
			state[i]=rotate(state[i]);
		if (state[i].w*state[i].h==minimum)
		{
			result[reCount]=state[i];
			reCount++;
		}
	}

	// cancel the repeated result.

	for (int i=0;i<reCount;i++)
	{
		if (result[i].w!=0 && result[i].h!=0)
		{
			for (int j=i+1;j<reCount;j++)
			{
				if (result[i].w==result[j].w && result[i].h==result[j].h)
				{
					result[j].w=0;
					result[j].h=0;
				}
			}
		}
	}

	sort(0,reCount-1);

	for (int i=0;i<reCount;i++)
	{
		if (result[i].w!=0 && result[i].h!=0)
			cout << result[i].w << " " << result[i].h << endl;
	}

	return 0;
}



