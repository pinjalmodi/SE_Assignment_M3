#include<stdio.h>
main(){
	char x[50];
	int s,l,i,a=0;
	char z[50];
	printf("\n\n\t Enter x");
	gets(x);
	
	printf("\n\n\t Enter No start");
	scanf("%d",&s);
	
	printf("\n\n\t Enter length");
	scanf("%d",&l);
	
	for(i=s;i<s+l;i++){
	z[a]=x[i];
	a++;
	}
	z[i]='\0';
	printf("\n\n\tSubstring is %s",z);
}