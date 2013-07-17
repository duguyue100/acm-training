#include <iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[3]={0};
    for (int i=1;i<=n;i++)
    {
        char st[100]={0};
        gets(st);
        if (st=="Emperor Penguins") a[0]++;
        else if (st=="Little Penguins") a[1]++;
        else if (st=="Macaroni Penguins") a[2]++;
    }

    int max=-1,index=0;
    for (int i=0;i<3;i++)
    {
        cout << a[i];
        if (max<a[i])
        {
            max=a[i];
            index=i;
        }
    }

    if (index==0) cout << "Emperor Penguins";
    else if (index==1) cout << "Little Penguins";
    else if (index==2) cout << "Macaroni Penguins";

    return 0;
}
