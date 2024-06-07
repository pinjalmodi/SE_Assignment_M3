#include<stdio.h>
main(){
	int i,n;
	printf("\n\n\t Enter n number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==n){
		printf("%d",i);
		}
	else{
	
		printf("%d+",i);
	}
}
}