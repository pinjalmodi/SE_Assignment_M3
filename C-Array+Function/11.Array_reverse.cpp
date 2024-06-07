// WAP to accept 5 numbers from user and display in reverse order using for loop and array 
#include<stdio.h>
main(){
	int x[5],i;
	
	for(i=0;i<5;i++){
		printf("Enter 5 values for x[%d]",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t.............5 Numbers are..............");
	for(i=0;i<5;i++){
		printf("\n\n\t%d",x[i]);
	}
	printf("\n\n\t.............Reverse Order is...........");
	for(i=4;i>=0;i--){
		printf("\n\n\t%d",x[i]);
	}
	
}