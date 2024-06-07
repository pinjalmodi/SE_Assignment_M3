#include<stdio.h>
main(){
	char x[50];
	int i,j;
	
	printf("\n\n\t Enter x");
	gets(x);
	
	for(i=0,j=0;x[i]!='\0';i++){
		if((x[i]>='a'&& x[i]<='z') || (x[i]>='A'&& x[i]<='Z')){
				x[j]=x[i];
				j++;
			}
			
		}
		x[j]='\0';
	
	printf("\n\n\t %s",x);
}