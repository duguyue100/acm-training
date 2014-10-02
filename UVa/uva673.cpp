#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

stack<char> a;
char ch;

int main(void)
{
	int n=0;
	cin >> n;
	scanf("%c", &ch);
	for (int i=1;i<=n;i++)
	{
		while (!a.empty()) a.pop(); // cleaning stack is important!!!

		bool flag=true;
		while (scanf("%c", &ch) && ch!='\n')
		{
			if (ch=='(' || ch=='[')
				a.push(ch);
			else if (ch==')' || ch==']')
			{
				if (a.empty())
				{
					flag=false;
				}
				else if ((ch==')' && a.top()!='(') || (ch==']' && a.top()!='['))
				{
					flag=false;
				}
				else a.pop();
			}
		}

		if (flag==true)
		{
			if (a.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else cout << "No" << endl;
	}

	return 0;
}
