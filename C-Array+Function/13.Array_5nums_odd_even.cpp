#include<stdio.h>
main(){
	int x[5],i;
	
	for(i=0;i<5;i++){
		printf("\n\n\tEnter No x[%d]",i);
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n\n\t%d",x[i]);
	}
	for(i=0;i<5;i++){
	
	if(x[i]%2==0){
		printf("\n\n\t %d is Even Number",x[i]);
	}
	else{
		printf("\n\n\t %d is Odd number",x[i]);
	}
}
}