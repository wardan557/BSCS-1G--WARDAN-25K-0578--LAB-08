#include<stdio.h>
int main(){
	int n;
	printf("Enter A Number : ");
	scanf("%d",&n);
	 printf("Multiplication Table (1-%d)\n",n);
	 printf("\n");
	 int i,j;
	 
	 for(i=1;i<=n;i++){
	 	printf("%d : ",i);
	 	for(j=1;j<=n;j++){
	 		printf("%4d",i*j);
		 }
		 printf("\n");
	 }
	return 0;
}
