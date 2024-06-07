#include<stdio.h>
main(){
	char x[50];
	int i;
	
	printf("\n\n\t Enter x");
	gets(x);
	
	for(i=0;x[i]!='\0';i++){
		if(x[i]>='a' && x[i]<='z'){
			x[i]=x[i]-32;
		}
		else if(x[i]>='A' && x[i]<='Z'){
			x[i]=x[i]+32;
		}
	}
	printf("After conversion %s",x);
}