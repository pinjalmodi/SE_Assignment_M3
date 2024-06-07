#include<stdio.h>
#include<string.h>
main(){
	
	char x[10];
	int i,len;
	printf("\n\n\t Enter schools name");
	scanf("%s",&x);
	len=strlen(x);
	for(i=0;i<3;i++){
	
	printf("%c",x[i]);
	}
}