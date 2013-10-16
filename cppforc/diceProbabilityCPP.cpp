/*
 * diceProbability.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: dgyHome
 */

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int sides=6;
inline int r_sides(){return (rand()%sides+1);}

int main(void)
{
	const int n_dices=2;

	int d1, d2;

	srand(clock());

	cout << "\nEnter number of trials: ";
	int trials;

	cin >> trials;

	int * outcomes = new int[n_dices*sides+1];

	for (int j=0;j<trials;++j)
		outcomes[(d1=r_sides())+(d2=r_sides())]++;

	cout << "probability" << endl;
	for (int j=2;j<n_dices*sides+1;++j)
		cout << "j = " << j << "p ="
			<< static_cast<double>(outcomes[j])/trials <<endl;

	return 0;
}
