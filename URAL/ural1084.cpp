#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define pi 3.1415926

int main(void)
{
   double n=0,m=0;
   cin >> n >> m;
   
   if (m<=n/2)
   {
      printf("%.3f",pi*m*m);
      return 0;
   }
   else if (m>=sqrt(2)*n/2)
   {
      printf("%.3f",n*n);
   }
   else
   {
      printf("%.3f",(4*sqrt(m*m-n*n/4)*(n/2)+4*m*m/2*(pi/2-2*acos(n/2/m))));
   }
   return 0;
}