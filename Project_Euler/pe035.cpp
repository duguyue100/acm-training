#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

vector<int> a;
int n=1000000;

vector<int> rotate(vector<int> t)
{
	int temp=t[0];
	t.erase(t.begin());
	t.push_back(temp);

	return t;
}

vector<int> denumber(int n)
{
	vector<int> temp;
	while (n!=0)
	{
		temp.push_back(n%10);
		n/=10;
	}

	return temp;
}

int comnumber(vector<int> t)
{
	int result=0;
	int p=1;
	for (size_t i=0;i<t.size();i++)
	{
		result+=p*t[i];
		p*=10;
	}

	return result;
}

bool isprime(int n)
{
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return true;

	return false;
}

bool check(int n)
{
	vector<int> number=denumber(n);
	for (size_t i=0;i<number.size();i++)
		if (number[i]==0) return false;

	int leng=number.size();

	for (int i=1;i<=leng;i++)
	{
		int temp=comnumber(number);

		if (isprime(temp)==true)
			return false;

		number=rotate(number);
	}

	return true;
}

int main(void)
{
	for (int i=2;i<=n;i++)
		a.push_back(i);

	std::vector<int>::iterator it;
	it=remove_if(a.begin(), a.begin()+a.size(), isprime);

	a.resize( std::distance(a.begin(),it) );

	int counter=0;
	int length=a.size();
	for (int i=0;i<length;i++)
	{
		if (check(a[i]))
		{
			counter++;
			cout << a[i] << endl;
		}
	}

	cout << counter << endl;

}
