//summation of given number
#include<stdio.h>
int main(){
	int x,rem,sum=0;
	printf("\n\n\t Enter a number");
	scanf("%d",&x);
	
	while(x>0){
		rem=x%10;
		x=x/10;
		sum=sum+rem;
	}
	printf("\n\n\t Sum of a number is %d",sum);
}