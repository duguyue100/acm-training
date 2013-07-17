/*
#include<iostream>
#include<string>

using namespace std;

string process(string st)
{
	int n=st.length();
	for (int i=0;i<st.length();i++)
	{
		int j=i;
		int counter=1;
		while (j<st.length()-1 && st[j]==st[j+1])
		{
			counter++;
			j++;
		}
		if (counter==1)
			continue;
		else if (counter%2==0)
			st.erase(i,counter);
		else if (counter%2==1)
			st.erase(i,counter-1);
	}
	
	if (n==st.length())
		return st;
	else return process(st);
}

int main(void)
{
	string st="";
	cin >> st;
	cout << process(st);
	return 0;
}
*/

// this one is really good...
// using stack, the performance is able to improve a lot.
// compare to previous code, this one is neat!!!!!!!

#include<cstdio>
#include<iostream>


using namespace std;
char a[200001]={0};

int main(void)
{
	int n=0;
	while (scanf("%c",&a[n])!=EOF)
	{
		if (a[n]=='\n') break;
		if (n-1>=0 && a[n-1]==a[n])
			n--;
		else n++;
	}

	for(int i=0;i<=n;i++)
		cout << a[i];
	cout << endl;
}
