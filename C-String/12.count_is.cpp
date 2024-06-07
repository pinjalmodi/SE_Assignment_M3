//find the number of times a given word 'is' appears in the given string.
#include<stdio.h>
#include<string.h>
main(){
	char x[50];
	int count=0;
	
	printf("\n\n\t Enter x");
	gets(x);

	char *token=strtok(x," ");
	
	while(token!=NULL){
		if (strcmp(token,"is")==0){
		
				count++;
			}
	token=strtok(NULL," ");
	}
	printf("%d",count);
}
