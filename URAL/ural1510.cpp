#include <iostream>

using namespace std;

long long a[500001]={0};

void sort(int l, int r)
{
    int i,j;
    long long x, y;
    i=l;
    j=r;
    x=a[(l+r)/2];
    do
    {
        while (a[i]<x) i++;
        while (x<a[j]) j--;
        if (i<=j)
        {
            y=a[i];
            a[i]=a[j];
            a[j]=y;
            i++;
            j--;
        }
    }while (i<=j);
    if (i<r) sort(i,r);
    if (l<j) sort(l,j);
}

int main()
{
    int n=0;
    cin >> n;

    for (int i=1;i<=n;i++)
        cin >> a[i];

    sort(1,n);

    long long t=a[1];
    int k=1;
    for (int i=2;i<=n;i++)
    {
        if (a[i]==t) k++;
        else if (k>n/2)
        {
            cout << t;
            return 0;
        }
        else
        {
            t=a[i];
            k=1;
        }
    }

    cout << t;
    return 0;
}
