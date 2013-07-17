#include<iostream>
#include<string>
#include<cstdio>

using namespace std;
//char a[4000]={0};
string a;

void addone(long p)
{
   int m=p;
   while (a[m]=='9')
   {
      a[m]='0';
      m--;
   }
   a[m]++;
}

int main(void)
{
   int n=1;
   cin >> a;
   //while (scanf("%c",&a[n])!=EOF) n++;
   n=a.length()-1;
   
   for (int i=0;i<=n/2;i++)
   {
      int j=n-i;
      if (a[i]<a[j])
         addone(j-1);
      
      a[j]=a[i];
   }
   
   //for (int i=0;i<=n;i++) printf("%c",a[i]);
   cout << a;
   
   return 0;
}