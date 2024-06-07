#include<stdio.h>
main(){
	int i,j,k,n;
	printf("\n\n\t Enter value for n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
			for(k=1;k<=(2*i-1);k++){
				printf("*");
			}
			
	printf("\n");	
		
	}
	
}