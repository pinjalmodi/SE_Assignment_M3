#include<stdio.h>
int main(){
	int x,sum=0,ld;
	printf("\n\n\t Enter a number");
	scanf("%d",&x);
	
	ld=x%10;
	while(x>=10){
		x=x/10;
	}
	sum=ld+x;
	printf("\n\n\t Sum of first and last digit is %d",sum);
}