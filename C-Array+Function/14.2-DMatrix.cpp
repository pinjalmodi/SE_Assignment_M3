//Perform 2D-metrix array
#include<stdio.h>
main(){
	int x[3][3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n\n\tEnter values for x[%d] and x[%d]",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n\n\t........matrix...........\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",x[i][j]);
		
		}
	printf("\n");
	}
	
}