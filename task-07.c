#include<stdio.h>
int main(){
	int seats[3][3] = {{1,0,1},{0,0,1},{1,1,0}};
	int availablecount = 0;
	int i,j;
	printf("Available seats:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(seats[i][j]==0){
				availablecount++;
				printf("Rows %d, Seat %d is Available\n",i+1,j+1);
			}
		}
	}
	printf("\nTotal Available seats is %d:",availablecount);
	return 0;
}
