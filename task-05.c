#include<stdio.h>
int main(){
	int Year1[12] = {12,10,15,8,5,20,25,30,10,5,8,15};
	int Year2[12] = {10,12,18,9,6,22,28,35,12,7,9,16};
	int month;
	for(month = 0;month<12;month++){
		printf("Year 1. MONTH %d: %d\n",month+1,Year1[month]);
	}
	for(month=0;month<12;month++){
		printf("Year 2. MONTH %d: %d\n",month+1,Year2[month]);
	}
	return 0;
}
