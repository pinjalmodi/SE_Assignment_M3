// Calculate the Sum of Natural Numbers Using the While Loop 
#include<stdio.h>
main(){
	int n,i,sum=0;
	printf("\n\n\t Enter the limit");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("\n\n\t Sum is %d",sum);
}