#include<stdio.h>
main(){
	int i,j,n;
	printf("\n\n\t Enter value for n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==n){
			printf("(%d*%d)",i,i);
		}
		else{
			printf("(%d*%d)+",i,i);
		}
	}
}
