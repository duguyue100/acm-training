/*
 * uva12015.cpp
 *
 *  Created on: Oct 14, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<queue>

using namespace std;

struct website{
	string url;
	int rank;
};

class CompareWebsite{
public:
	bool operator()(website& w1, website& w2)
	{
		if (w1.rank<w2.rank) return true;

		return false;
	}
};

int main(void)
{
	int n=0;
	cin >> n;

	for (int k=1;k<=n;k++)
	{
		priority_queue<website, vector<website>, CompareWebsite> a;
		for (int i=1;i<=10;i++)
		{
			website temp;
			string str;
			int m;
			cin >> str >> m;

			temp.url=str;
			temp.rank=m;

			a.push(temp);
		}
		int highest=a.top().rank;

		cout << "Case #" << k << ":" << endl;
		while (a.top().rank==highest)
		{
			cout << a.top().url << endl;
			a.pop();
		}
	}

	return 0;
}
