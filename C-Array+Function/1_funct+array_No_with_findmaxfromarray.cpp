//No argument with return type
#include<stdio.h>
int maximum();
main(){
	int max;
	max=maximum();
	printf("\n\n\t Maximum is %d",max);
}
int maximum(){
	int x[5],i,max;
	for(i=0;i<5;i++){
		printf("\n\n\t Enter values");
		scanf("%d",&x[i]);
	}
	max=x[0];
	for(i=0;i<5;i++){
		if(x[i]>max)
		max=x[i];
	}
	return max;
}