//without argument without return type
#include<stdio.h>
int maximum();
main(){
	maximum();
}

int maximum(){
	int x[5],i;
	int max;
	printf("\n\n\tEnter array values");
	for(i=0;i<5;i++)
	{	
	scanf("%d",&x[i]);
	}
	max=x[0];
	for(i=0;i<5;i++)
	{
	if(x[i]>max)
	max=x[i];
	}
	printf("\n\n\t Max is %d\n\n",max);
}
