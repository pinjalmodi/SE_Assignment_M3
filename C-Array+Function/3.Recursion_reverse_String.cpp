#include<stdio.h>
#include<string.h>
char *rev(char x[],int b,int e);
main(){
	
	char x[10],*z;
	printf("\n\n\t Enter a string");
	scanf("%s",&x);
	z=rev(x,0,strlen(x)-1);
	printf("Rev is %s",z);
}
char *rev(char x[],int b,int e){
	char temp;
	if(b>=e)
	return x;
	temp=x[b];
	x[b]=x[e];
	x[e]=temp;
	return rev(x,++b,--e);
}
