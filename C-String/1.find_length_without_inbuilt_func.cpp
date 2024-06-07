//WAP in C to find the length of a string without using library functions.
#include<stdio.h>
main(){
	char name[20];
	int count=0;
	int i;
	printf("\n\n\t Enter a name");
	gets(name);
	puts(name);
	
	for(i=0;name[i]!='\0';i++){
		count++;
	}
	printf("Length of the string is %d",count);
}