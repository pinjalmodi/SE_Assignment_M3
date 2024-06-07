//Write a program in C to copy one string to another string.
#include<stdio.h>
main(){
	char x[20],y[20];
	int i;
	
	printf("\n\n\t Enter string 1");
	gets(x);
	
	for(i=0;x[i]!='\0';i++){
		y[i]=x[i];
	}
	y[i]='\0';
	
	printf("\n\n\tString 1 %s",x);
	printf("\n\n\tString 2 %s",y);
}