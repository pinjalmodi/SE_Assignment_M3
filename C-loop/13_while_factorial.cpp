//calculate factorial of a given number using while loop
#include<stdio.h>
main(){
	int x,i,fact=1;
	printf("\n\n\t Enter a number");
	scanf("%d",&x);
	
	i=1;
	while(i<=x){
	fact=fact*i;
	i++;	
	}
	printf("\n\n\t Factorial is %d",fact);
}