/*
ID: duguyue1
TASK: clocks
LANG: C++
*/

// memory here is a issue, since the search space is
// up to 4^9, you should keep the elements of queue is relatively small.

#include <iostream>
#include <fstream>
#include <cstdio>
#include <queue>

using namespace std;

struct state{
	short clock[9];
	short u[9];
	short steps;
};

short path[100]={0};
short c[9][9]={{1,1,0,1,1,0,0,0,0},
			 {1,1,1,0,0,0,0,0,0},
			 {0,1,1,0,1,1,0,0,0},
			 {1,0,0,1,0,0,1,0,0},
			 {0,1,0,1,1,1,0,1,0},
			 {0,0,1,0,0,1,0,0,1},
			 {0,0,0,1,1,0,1,1,0},
			 {0,0,0,0,0,0,1,1,1},
			 {0,0,0,0,1,1,0,1,1}};

queue<state> q;

bool check(state s)
{
	for (int i=0;i<9;i++)
		if (s.clock[i]!=0) return false;

	return true;
}

state change(state s)
{
	state temp=s;
	int tempu[9]={0};
	if (s.u[s.steps-1]!=0)
		for (int j=0;j<9;j++)
			tempu[j]+=c[s.steps-1][j]*s.u[s.steps-1];

	for (int i=0;i<9;i++)
	{
		temp.clock[i]+=3*tempu[i];
		temp.clock[i]%=12;
	}

	return temp;
}

int main(void)
{
	freopen("clocks.in","r",stdin);
	freopen("clocks.out","w",stdout);

	int n=0;
	state init;
	for (int i=0;i<9;i++)
	{
		cin >> n;
		init.clock[i]=n%12;
		init.u[i]=0;
	}
	init.steps=0;

	q.push(init);
	while (!q.empty())
	{
		state temp=q.front();
		q.pop();

		for (int i=0;i<4;i++)
		{
			state t=temp;
			t.u[t.steps]=i;
			t.steps++;
			t=change(t);

			if (check(t))
			{
				int counter=0;
				for (int j=0;j<9;j++)
				{
					if (t.u[j]!=0)
						for (int k=0;k<t.u[j];k++)
						{
							path[counter]=j+1;
							counter++;
						}
				}

				for (int i=0;i<counter-1;i++)
					cout << path[i] << " ";
				cout << path[counter-1] << endl;

				return 0;
			}
			else q.push(t);
		}
	}


	return 0;
}
