#include<stdio.h>
main(){
	char x[50];
	int i,alpha=0,dig=0,sp=0;
	printf("\n\n\t Enter a string");
	gets(x);
	puts(x);
	
	for(i=0;x[i]!='\0';i++){
		if(x[i]>='a' && x[i]<='z'){
			alpha++;
		}
		else if(x[i]>='0' && x[i]<='9'){
		dig++;	
		}
		else{
			sp++;
		}
	}
	printf("Alpha is %d",alpha);
	printf("Digit is %d",dig);
	printf("Sp is %d",sp);	
}