//Write a program in C to separate individual characters from a string.
#include<stdio.h>
main(){
	char name[20];
	int i;
	
	printf("\n\n\t Enter a name");
	gets(name);
	puts(name);
	
	for(i=0;name[i]!='\0';i++){
	
	printf("\t%c",name[i]);
	printf("\n");
	}

}