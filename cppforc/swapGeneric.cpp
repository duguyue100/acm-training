/*
 * swapGeneric.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: dgyHome
 *
 *  If you can't compile it as swap(T& i, T& j),
 *  the choose another name, because it's avaliable in
 *  standard library.
 */

#include<iostream>
#include<cstdlib>

using namespace std;

template<class T>
inline void swapGeneric(T& i, T& j)
{
	T temp=i;
	i=j;
	j=temp;
}

int main(void)
{
	int n1, n2;
	cin >> n1 >> n2;

	swapGeneric(n1, n2);

	cout << n1 << " " << n2;
	return 0;
}
