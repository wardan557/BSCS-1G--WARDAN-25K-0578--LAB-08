#include<stdio.h>
int main(){
	int arr[3][3] = {{10,12,34},{67,76,23},{42,98,90}};
	int max = 0;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}
		}
	}
	printf("The Highest element is %d \n",max);
	return 0;
}
