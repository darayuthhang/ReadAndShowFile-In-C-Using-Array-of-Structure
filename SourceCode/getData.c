
#include <stdio.h>
#include <stdlib.h>
#include "problem2.h" 

int GetData(){

	int i;
	//ask users to enter Number from 1 to 10
	printf("Give me a number from 1 to 10:\n");
	scanf("%d", &i);

	//exit if numbers exceed 10
	if(i > fix_arr){
		return -1;
	}
	return i;	
}