#include<stdio.h>
main(){
	char x[50];
	int count,i;
	
	printf("\n\n\t Enter a name");
	gets(x);
	
	for(i=0;x[i]!='\0';i++){
		count++;
	}
	printf("\n\n\t Length of the string is %d",count);
}