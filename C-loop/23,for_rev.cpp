#include<stdio.h>
main(){
	int n,i,y=0,rem;
	printf("\n\n\t Enter a number");
	scanf("%d",&n);
	
	for(n=n;n>0;n=n/10){
		rem=n%10;
		y=(y*10)+rem;
	
	}
	printf("\n\n\t Rev number is %d",y);
}