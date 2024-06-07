//WAP in C to compare two strings without using string library functions.

#include<stdio.h>
#include<string.h>
main(){
	char x[50],y[50];
	
	printf("\n\n\t Enter values in string 1");
	gets(x);
	printf("\n\n\t Enter values in string 2");
	gets(y);
	
	if(strlen(x)==strlen(y)){
		printf("Both Strings are same length");
	}
	else if(strlen(x)>strlen(y)){
		printf("X is bigger");
	}
	else{
		printf("Y is bigger");
	}
	
}