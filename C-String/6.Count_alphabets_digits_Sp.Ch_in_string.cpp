//WAP in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
main(){
	char x[50];
	int i,count=0;
	printf("\n\n\t Enter a string");
	gets(x);
	puts(x);
	
	for(i=0;x[i]!='\0';i++){
		if(x[i]==' '){
			count=count+0;
		}
		else{
		count++;	
		}
		
	}
	printf("Total is %d",count);
}