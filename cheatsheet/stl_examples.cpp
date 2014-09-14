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

#define int long long // make everyone long long
#define double long double;

using namespace std;

// example for condition
bool isOdd(int n)
{
	return ((n%2)==1);
}

// example for compare
bool small(int n, int m)
{
	return n<m;
}

#undef int // main must return int
int main(void)
#define int long long // redefine int
{
	/**** Limits ****/

	cout << "------TEST FOR LIMITS------" << endl;
	// All defined in <climits>
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	cout << LONG_MAX << endl;
	cout << LONG_MIN << endl;
	cout << LLONG_MAX << endl;
	cout << LLONG_MIN << endl;
	cout << (~0u) << endl; // 4294967295 in my system
	cout << "------TEST FOR LIMITS------" << endl;
	cout << endl << endl;

	/**** Space Waster ****/
	// The following tests are carried out with space waster
	// unless it's mentioned.


	/**** Initialize array with predefined value ****/

	int a[10]={0}; // initialize every elements as 0
	               // working only for 1-d array
	               // if not use other numbers between {},
	               // first element will be the value, and rest
	               // are 0.

	cout << "------TEST FOR INITIALIZE ARRAY------" << endl;
	for (int i=0;i<10;i++)
		cout << a[i] << " ";
	cout << endl;

	fill(a, a+10, 2);
	for (int i=0;i<10;i++)
		cout << a[i] << " ";
	cout << endl;

	fill_n(a, 10, 3);
	for (int i=0;i<10;i++)
		cout << a[i] << " ";
	cout << endl;

	memset(a, 0, sizeof(a));
	for (int i=0;i<10;i++)
		cout << a[i] << " ";
	cout << endl;

	int b[10][10];
	for (int i=0;i<10;i++)
		fill(b[i], b[i]+10, 5);

	for (int i=0;i<10;i++)
	{
		for (int j=0;j<10;j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	cout << "------TEST FOR INITIALIZE ARRAY------" << endl;
	cout << endl << endl;

	/**** Modifying sequence operations ****/
	cout << "------TEST FOR MODIFYING SEQUENCE OPERATIONS------" << endl;

	// generate data
	for (int i=0;i<10;i++) a[i]=i;
	cout << "Original data:   ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	// copy
	int c[5];
	copy(a,a+5,c);
	cout << "Copied data:     ";
	for (int i=0;i<5;i++) cout << c[i] << " ";
	cout << endl;

	// swap
	swap(a[2], a[6]);
	cout << "Swapped data:    ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	// replace
	fill(a, a+10, 4);
	cout << "Original data:   ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;
	cout << "Replaced data:   ";
	replace(a,a+4, 4, 5);
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	// replace if
	for (int i=0;i<10;i++) a[i]=i;
	cout << "Original data:   ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;
	replace_if(a, a+10, isOdd, 0); // replace all odd number to 0
	cout << "Replace-if data: ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	// reverse
	reverse(a, a+7);
	cout << "Reversed data:   ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	// reverse-copy is similar to copy

	// random_shuffle
	for (int i=0;i<10;i++) a[i]=i;
	cout << "Original data:       ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;
	random_shuffle(a,a+10);
	cout << "Random shuffle data: ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;
	cout << "------TEST FOR MODIFYING SEQUENCE OPERATIONS------" << endl;
	cout << endl << endl;

	/**** Merge ****/
	cout << "------TEST FOR MERGE------" << endl;

	int d[10]={0};
	int e[10]={0};

	for (int i=0;i<10;i++) d[i]=i;
	cout << "Original data 1:       ";
	for (int i=0;i<10;i++) cout << d[i] << " ";
	cout << endl;
	for (int i=0;i<10;i++) e[i]=i+1;
	cout << "Original data 2:       ";
	for (int i=0;i<10;i++) cout << e[i] << " ";
	cout << endl;

	// merge
	int f[20]={0};
	merge(d, d+10, e, e+5, f, small);
	// same effect without the last term
	cout << "Merged data:           ";
	for (int i=0;i<15;i++) cout << f[i] << " ";
	cout << endl;

	// set union
	int g[20]={0};
	set_union(d, d+10, e, e+10, g);
	cout << "Set union data:        ";
	for (int i=0;i<20;i++) cout << g[i] << " ";
	cout << endl;

	// set intersection
	int h[20]={0};
	set_intersection(d, d+10, e, e+10, h);
	cout << "Set intersection data: ";
	for (int i=0;i<20;i++) cout << h[i] << " ";
	cout << endl;

	// set difference
	int l[20]={0};
	set_difference(d, d+10, e, e+10, l);
	cout << "Set difference data:   ";
	for (int i=0;i<20;i++) cout << l[i] << " ";
	cout << endl;

	cout << "------TEST FOR MERGE------" << endl;
	cout << endl << endl;

	/**** String ****/
	cout << "------TEST FOR STRING------" << endl;

	string st="abcldefghijklmn";
	cout << "String      : " << st << endl;
	cout << "Find first l: " << st.find("l") << endl;
	cout << "Find last l : " << st.rfind("l") << endl;
	cout << "Insert aaaa : " << st.insert(5, "aaaa") << endl;
	cout << "Erase aaaa  : " << st.erase(5, 4) << endl;
	cout << "Replace de  : " << st.replace(st.find("de"), 2, "ll") << endl;

	stringstream s1;
	int i=22;
	s1 << "Hello world" << i;
	cout << s1.str() << endl;

	cout << "------TEST FOR STRING------" << endl;
	cout << endl << endl;

	/**** Sort ****/
	cout << "------TEST FOR SORT------" << endl;
	for (int i=0;i<10;i++) a[i]=i;
	random_shuffle(a, a+10);
	cout << "Original data : ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	// sort
	sort(a, a+10);
	cout << "Sorted data   : ";
	for (int i=0;i<10;i++) cout << a[i] << " ";
	cout << endl;

	cout << "------TEST FOR SORT------" << endl;
	cout << endl << endl;

	/**** Permutations ****/
	cout << "------TEST FOR PERMUTATIONS" << endl;

	int o[4]={1,2,3,4};

	do
	{
		for (int i=0;i<4;i++) cout << o[i] << " ";
		cout << endl;
	}while (next_permutation(o, o+4));

	cout << "------TEST FOR PERMUTATIONS" << endl;
	cout << endl << endl;

	/**** Searching ****/
	// Similar to sring's search.

	/**** Random algorithm ****/

	cout << "------TEST FOR RANDOM ALGORITHM" << endl;

	srand(time(NULL));

	cout << "Rand number [5,10): " << rand()%(10-5)+5 << endl;
	cout << "Rand number [5,10]: " << rand()%(11-5)+5 << endl;

	cout << "------TEST FOR RANDOM ALGORITHM" << endl;
	cout << endl << endl;

	// use random_permuation like next_permuation

	return 0;
}
