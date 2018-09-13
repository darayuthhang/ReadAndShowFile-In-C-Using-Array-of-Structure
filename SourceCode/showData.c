
#include <stdio.h>
#include <stdlib.h>
#include "data.h" 

void ShowData(int i){
	FILE *fptr;
	//try open the File
	fptr = fopen("data.txt", "r");

	//exit if file does not open
	if(fptr == NULL){
		printf("Sorry The File Cannot Be Found\n");
	}
	else{
		int count;
		////if not exceed 10, read the data file.
		for(count=0; count<i; count++){
			fscanf(fptr,"%s %d %d\n", record[count].Name, &record[count].age, &record[count].salary);
			printf("%s %d %d\n", record[count].Name, record[count].age, record[count].salary);
		}	
	}
	fclose(fptr);
}