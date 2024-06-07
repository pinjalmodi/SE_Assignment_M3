#include<stdio.h>
main(){
	int x[3],i,j,fact=1;
	
	for(i=0;i<3;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<3;i++){
		printf("%d",x[i]);
	}

	for(i=0;i<3;i++){
		fact=1;
	for(j=1;j<=x[i];j++){
		fact=(fact*j);
	}
	printf("\n\n\tFact is %d",fact);
}
}