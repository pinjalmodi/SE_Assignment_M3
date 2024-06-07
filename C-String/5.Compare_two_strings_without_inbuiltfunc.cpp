#include<stdio.h>
#include<string.h>
main(){
	char x[50],y[50];
	int count,c,i,j;
	printf("\n\n\t Enter values in string 1");
	gets(x);
	printf("\n\n\t Enter values in string 2");
	gets(y);
	
	for(i=0;i!='\0';i++){
		x[i]++;
	}
	for(j=0;j!='\0';j++){
		y[j]++;
	}
	if(x[i]==y[j]){
		printf("x & y are same length");
	}
	else if(x[i]>y[j]){
		printf("x is bigger than y");
	}
	else{
		printf("y is bigger than x");
	}
}