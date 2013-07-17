#include<iostream>

using namespace std;

int a[2000]={0};

int main(void)
{
   a[1]=6;a[2]=3; int l=2;
   int n;
   cin >> n;
   for (int i=1;i<n;i++)
   {
      //for (int j=1;j<=l;j++) a[j]*=55;
      int k=1, t=0;
      for (int j=1;j<=l;j++)
      {
         t=a[j]*55+t;
         a[j]=t%10;
         t=t/10;
      }
      while (t!=0)
      {
         l++;a[l]=t%10;t/=10;
      }
      /*
      while (a[k]>=10 || a[k]==0)
      {
         a[k+1]+=a[k]/10;
         a[k]%=10;
         k++;
      }
      */
      //l=k;
   }

   for (int i=l;i>=1;i--) cout << a[i];
   return 0;
}
