#include<iostream>

using namespace std;

int a[50001]={0};
int b[50001]={0};

int n,m;

bool check(int k,int s, int e)
{
   if (s>e)
      return false;
   else
   {
      int index=(s+e)/2;
      if (b[index]<k)
         return check(k, 1, index-1);
      else if (b[index]>k)
         return check(k,index+1,e);
      else return true;
   }
}

int main(void)
{
   cin >> n;
   for (int i=1;i<=n;i++) cin >> a[i];
   cin >> m;
   for (int i=1;i<=m;i++) cin >> b[i];
   
   for (int i=1;i<=n;i++)
   {
      if (check(10000-a[i],1,m))
      {
         cout << "YES";
         return 0;
      }
   }
   
   cout << "NO";
   
   return 0;
}