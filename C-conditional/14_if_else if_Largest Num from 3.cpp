#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter value for a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("A is Big");
	}
	else if(b>a && b>c){
		printf("B is Big");
	}
	else {
		printf("C is Big");
	}
}