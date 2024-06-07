#include<stdio.h>
main(){
	int x[5],i,sum=0;
	
	for(i=0;i<5;i++){
		printf("Enter 5 Numbers from x[%d]",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t........Stored values........");
	for(i=0;i<5;i++){
		printf("\n\n\t%d",x[i]);
	}
	for(i=0;i<5;i++){
	
	sum=sum+x[i];
}
	printf("\n\n\t........Sum...........");
	printf("\n\n\t%d",sum);
}
