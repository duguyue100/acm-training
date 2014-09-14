/*
 * STL Library Examples
 *
 * Author: Hu Yuhuang
 * Date  : 2014-09-14
 */

/*** System Library ***/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib> // random
#include<ctime>
#include<climits> // all useful constants
#include<functional> // for hash
#include<algorithm>
#include<sstream>

/*** Data Structure ***/
#include<string>
#include<queue>
#include<stack>
#include<vector>
#include<deque> // double ended queue
#include<list> // priority queue

using namespace std;

int max(int a, int b)
{
	return a>b ? a:b;
}

int min(int a, int b)
{
	return a<b ? a:b;
}

int gcd(int a, int b)
{
	if (b==0) return a;
	else return gcd(b, a%b);
}

int lcm(int a, int b)
{
	return a*b/gcd(a,b);
}

bool prime(int n)
{
	if (n<2) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

bool isLeap(int n)
{
	if (n%100==0)
		if (n%400==0) return true;
		else return false;

	if (n%4==0) return true;
	else return false;
}

long powmod(long base, long exp, long modulus) {
  base %= modulus;
  long result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

int factmod (int n, int p) {
	long long res = 1;
	while (n > 1) {
		res = (res * powmod (p-1, n/p, p)) % p;
		for (int i=2; i<=n%p; ++i)
			res=(res*i) %p;
		n /= p;
	}
	return int (res % p);
}

void combination(int n, int m)
{
	if (n<m) return ;
	int a[50]={0};
	int k=0;

	for (int i=1;i<=m;i++) a[i]=i;
	while (true)
	{
		for (int i=1;i<=m;i++)
			cout << a[i] << " ";
		cout << endl;

		k=m;
		while ((k>0) && (n-a[k]==m-k)) k--;
		if (k==0) break;
		a[k]++;
		for (int i=k+1;i<=m;i++)
			a[i]=a[i-1]+1;
	}
}

int main(void)
{
	/**** Max or min ****/

	cout << "------TEST FOR MAX OR MIN------" << endl;
	// Max and min are implemented in library
	// the point for this is to show the syntax

	cout << "Max of (5,7): " << max(5,7) << endl;
	cout << "Min of (5,7): " << min(5,7) << endl;

	cout << "------TEST FOR MAX OR MIN------" << endl;
	cout << endl << endl;

	/**** GCD and LCM ****/

	cout << "------TEST FOR GCD AND LCM------" << endl;

	cout << "GCD of (12, 15): " << gcd(12,15) << endl;
	cout << "LCM of (12, 15): " << lcm(12,15) << endl;

	cout << "------TEST FOR GCD AND LCM------" << endl;
	cout << endl << endl;

	/**** prime number ****/

	cout << "------TEST FOR PRIME NUMBER------" << endl;

	cout << "Is 1251 prime?: " << prime(1251) << endl;
	cout << "Is 97 prime?  : " << prime(97) << endl;

	cout << "------TEST FOR PRIME NUMBER------" << endl;
	cout << endl << endl;

	/**** Leap year ****/

	cout << "------TEST FOR LEAP YEAR------" << endl;

	cout << "2012 is Leap? : " << isLeap(2012) << endl;
	cout << "1900 is Leap? : " << isLeap(1900) << endl;
	cout << "1903 is Leap? : " << isLeap(1903) << endl;

	cout << "------TEST FOR LEAP YEAR------" << endl;
	cout << endl << endl;

	/**** a^b mod p and n! mod p ****/

	cout << "------TEST FOR (A^B MOD P) AND (N! MOD P)------" << endl;

	cout << "5^6 mod 17: " << powmod(5, 6, 17) << endl;
	cout << "17 mod 17 : " << factmod(17, 17) << endl;

	cout << "------TEST FOR (A^B MOD P) AND (N! MOD P)------" << endl;
	cout << endl << endl;

	/**** Generate combinations ****/

	cout << "------TEST FOR GENERATING COMBINATIONS------" << endl;

	combination(6, 3); // pick 3 numbers from 6 numbers

	cout << "------TEST FOR GENERATING COMBINATIONS------" << endl;
	cout << endl << endl;

	return 0;
}
