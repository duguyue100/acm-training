#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

vector<short> number;

vector<short> denumber(int a)
{
	vector<short> temp;
	while (a!=0)
	{
		temp.push_back((short)a%10);
		a/=10;
	}

	std::reverse(temp.begin(), temp.end());

	return temp;
}

int main(void)
{
	int n=1;
	while (number.size()<1000000)
	{
		vector<short> temp=denumber(n);
		number.insert(number.end(), temp.begin(), temp.end());
		n++;

		cout << number.size() << endl;
	}

	cout << "Result: " << number[0]*number[9]*number[99]*number[999]*number[9999]*number[99999]*number[999999] << endl;

	return 0;
}
