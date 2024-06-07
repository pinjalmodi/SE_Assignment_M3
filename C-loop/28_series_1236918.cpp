#include<stdio.h>
main(){
	int n,i,z;
	printf("\n\n\t Enter n number limit");
	scanf("%d",&n);
	z=1;
	while(z<=n && i<=n){
		z=z+i;
		printf("\t%d",i);	
		printf("\t%d",z);	
		i=z+z;
}
}