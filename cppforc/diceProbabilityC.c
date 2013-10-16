/*
 * diceProbability.c
 *
 *  Created on: Oct 16, 2013
 *      Author: dgyHome
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIDES 6
#define R_SIDE (rand()%SIDES+1)

int main(void)
{
	int trials=0,j=0, d1=0, d2=0;
	int n_dice=2;
	int outcomes[13]={0};
	srand(clock());

	printf("\n Enter number of trails: ");
	scanf("\%d", &trials);

	for (j=0;j<trials;++j)
		outcomes[(d1=R_SIDE)+(d2=R_SIDE)]++;

	for (j=2;j<n_dice*SIDES+1;++j)
		printf("j=%d p=%lf\n", j, (double)outcomes[j]/trials);

	return 0;
}
