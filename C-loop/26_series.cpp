#include<stdio.h>
main(){
	int i,j,n;
	printf("\n\n\t Enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("(");
	for(j=1;j<=i;j++){
		printf("%d",j);
		if(j<i){
			printf("+");
		}
		else if(j==i){
			printf(")+");
		}	
}
}
}