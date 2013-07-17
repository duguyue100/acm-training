#include<iostream>

using namespace std;

int main(void)
{
   int N=0, P=0;
   cin >> N >> P;
   
   P--;
   for (int i=1;i<=N;i++)
   {
      int t;
      cin >> t;
      cout << P/t << " ";
      P%=t;
   }
   
   return 0;
}