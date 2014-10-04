#include<iostream>
#include<cstdio>

using namespace std;

string str, s;

int main(void)
{
	while (cin >> s >> str)
	{
		bool flag=true;
		for (size_t i=0;i<s.length();i++)
		{
			size_t pos=str.find(s[i]);
			if (pos!=string::npos)
			{
				str.erase(0, pos+1);
			}
			else
			{
				flag=false;
				break;
			}
		}

		if (flag==false) cout << "No" << endl;
		else cout << "Yes" << endl;
	}


	return 0;
}
