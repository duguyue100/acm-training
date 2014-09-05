/*
ID: duguyue1
TASK: castle
LANG: C++
*/

#include<iostream>
#include<cstdio>

using namespace std;

struct Block{
	bool l[4];
	int room_id;
};

int M=0, N=0;
Block a[51][51];
int r[2501]={0};

bool find_border(int i, int j, int x, int y)
{
	if (a[x][y].room_id!=0)
	{
		if (a[i][j].room_id!=a[x][y].room_id)
			return true;
	}

	return false;
}

void find_neighbor(int i, int j)
{
	if (a[i][j].l[0]==true && a[i+1][j].room_id==0) // south
		a[i+1][j].room_id=-2;

	if (a[i][j].l[1]==true && a[i][j+1].room_id==0) // east
		a[i][j+1].room_id=-2;

	if (a[i][j].l[2]==true && a[i-1][j].room_id==0) // north
		a[i-1][j].room_id=-2;

	if (a[i][j].l[3]==true && a[i][j-1].room_id==0) // west
		a[i][j-1].room_id=-2;

}

int flood_fill(int new_room)
{
	int num_visited=0;
	int room_size=0;
	do
	{
		num_visited=0;

		for (int i=1;i<=N;i++)
			for (int j=1;j<=M;j++)
			{
				if (a[i][j].room_id==-2)
				{
					num_visited++;
					a[i][j].room_id=new_room;

					find_neighbor(i, j);
				}
			}
		room_size+=num_visited;
	}while (num_visited!=0);

	return room_size;
}

int main(void)
{
	freopen("castle.in", "r", stdin);
	freopen("castle.out", "w", stdout);

	cin >> M >> N;

	for (int i=1;i<=N;i++)
		for (int j=1;j<=M;j++)
		{
			int t=0;
			cin >> t;

			if (t-8<0) // wall on south
				a[i][j].l[0]=true;
			else
			{
				t-=8;
				a[i][j].l[0]=false;
			}

			if (t-4<0) // wall on east
				a[i][j].l[1]=true;
			else
			{
				t-=4;
				a[i][j].l[1]=false;
			}

			if (t-2<0) // wall on north
				a[i][j].l[2]=true;
			else
			{
				t-=2;
				a[i][j].l[2]=false;
			}

			if (t-1<0) // wall on west
				a[i][j].l[3]=true;
			else
			{
				t-=1;
				a[i][j].l[3]=false;
			}

			a[i][j].room_id=0;
		}

	int num_room=0;

	// find number of room
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=M;j++)
		{
			if (a[i][j].room_id==0)
			{
				num_room++;
				a[i][j].room_id=-2;
				r[num_room]=flood_fill(num_room);
			}
		}
	}

	int max_room_size=-1;
	for (int i=1;i<=num_room;i++)
		if (max_room_size<r[i]) max_room_size=r[i];

	// find which wall to remove

	int max_size=-1;
	int idx=0, idy=0;
	char ch='A';
	for (int j=1;j<=M;j++)
	{
		for (int i=N;i>=1;i--)
		{
			// find room border
			if (find_border(i,j, i-1,j))
			{
				if (r[a[i][j].room_id]+r[a[i-1][j].room_id]>max_size)
				{
					max_size=r[a[i][j].room_id]+r[a[i-1][j].room_id];
					idx=i;
					idy=j;
					ch='N';
				}
			}

			if (find_border(i,j, i,j+1))
			{
				if (r[a[i][j].room_id]+r[a[i][j+1].room_id]>max_size)
				{
					max_size=r[a[i][j].room_id]+r[a[i][j+1].room_id];
					idx=i;
					idy=j;
					ch='E';
				}
			}
		}
	}

	cout << num_room << endl;
	cout << max_room_size << endl;
	cout << max_size << endl;
	cout << idx << " " << idy << " " << ch << endl;

	return 0;
}


