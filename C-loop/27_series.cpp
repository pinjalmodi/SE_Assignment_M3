#include<stdio.h>
main(){
	int i,j,n;
	printf("\n\n\t Enter a limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d/%d",i,i+1);
		if((i+1)%2==0){
		printf("-");
		}
		else if(i==n){
			printf(" ");
		}
	
	else{
		printf("+");
	}
	}
	
}