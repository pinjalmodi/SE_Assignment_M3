// Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
main(){
	int x,n;
	printf("\n\n\t Enter table you wish to print");
	scanf("%d",&n);
	for(x=1;x<=10;x++){
		printf("\n\n\t%d*%d=%d",n,x,n*x);
	}
}
