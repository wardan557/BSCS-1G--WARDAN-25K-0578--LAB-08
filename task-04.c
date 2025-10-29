#include<stdio.h>
int main (){
	int number [3][4] = {{85,92,78,90},{88,76,95,84},{90,85,88,92}};
	float average;
	int i,j;
	for(i=0;i<3;i++){
		int sum = 0;
		for(j=0;j<4;j++){
			sum += number[i][j];  
		}
		average = sum/4.0;
		printf("Average score of class %d = %.2f\n",i+1,average);
	}
	return 0;
}
