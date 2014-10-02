#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

char ch;
stack<char> a;

int main(void)
{
	while (scanf("%c", &ch)!=EOF)
	{
		if (ch!=' ' && ch!='\n')
		{
			a.push(ch);
		}
		else
		{
			while (!a.empty())
			{
				cout << a.top();
				a.pop();
			}
			cout << ch;
		}
	}

	return 0;
}
