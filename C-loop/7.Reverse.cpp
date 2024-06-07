#include<stdio.h>
int main(){
	int x,n,rem,div,rev=0;
	printf("\n\n\t Enter a number");
	scanf("%d",&x);
	while(x!=0){
	rem=x%10;	
	rev=rev*10+rem;
	x=x/10;
	}	
	printf("\n\n\t Rev num is %d",rev);
}