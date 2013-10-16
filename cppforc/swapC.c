/*
 * swapC.c
 *
 *  Created on: Oct 16, 2013
 *      Author: dgyHome
 */

#include<stdio.h>
#include<stdlib.h>

void swap(int* i, int* j);
void swap_double(double* i, double* j);

int main(void)
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	swap(&n1,&n2);

	printf("%d %d", n1, n2);

	return 0;
}

void swap(int* i, int* j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

void swap_double(double* i, double* j)
{
	double temp=*i;
	*i=*j;
	*j=*i;
}
