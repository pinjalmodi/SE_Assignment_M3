#include<stdio.h>
main(){
	int x,n,max=0,rem;
	printf("\n\n\t Enter number n");
	scanf("%d",&n);
	
	while(n>0){
		rem=n%10;
		if(rem>max){
			max=rem;
		}
		n=n/10;
	}
	printf("\n\n\t Max number is %d",max);
}