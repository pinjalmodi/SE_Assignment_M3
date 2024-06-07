#include<stdio.h>
int fact(int n);
main(){
	int n;
	printf("\n\n\t Enter n");
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int n){
	if(n>0)
	return n*(fact(n-1));
	else
	return 1;
}