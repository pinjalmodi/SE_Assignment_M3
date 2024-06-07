//calculate sum of 10 numbers using while loop
#include<stdio.h>
main(){
	int x[10],i,sum=0;
	printf("\n\n\t Enter 10 numbers");
	
i=0;
while(i<10){
	scanf("%d",&x[i]);
	sum=sum+x[i];
	i++;
}
printf("\n\n\t%d",sum);
}