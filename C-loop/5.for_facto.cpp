#include<stdio.h>
int main(){
	int x,fact=1,i;
	printf("\n\n\t Enter a number you want factorial of");
	scanf("%d",&x);
	for(i=x;i>=1;i--){
		fact=fact*i;
	}
	printf("\n\n\t Factorial of %d is %d",x,fact);
}