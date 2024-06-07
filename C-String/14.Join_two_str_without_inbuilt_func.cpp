//combine two strings manually
#include<stdio.h>
main(){
	char x[100],y[100],z[200];
	int i,j;
	
	printf("\n\n\t Enter string 1");
	gets(x);
	printf("\n\n\t Enter string 2");
	gets(y);
	
	for(i=0,j=0;x[i]!='\0';i++,j++){
		z[j]=x[i];
	}
	for(i=0;y[i]!='\0';i++,j++){
		z[j]=y[i];
	}
	z[j]='\0';
	
	printf("x+y is %s",z);
	
}