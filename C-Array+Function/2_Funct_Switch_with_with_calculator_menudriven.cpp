//with argument with return type
//Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int calcu(int a,int b,char z);
 
main(){
	int a,b,c;
	char z;
	printf("\n\n\t Enter value for a");
	scanf("%d",&a);
	printf("\n\n\t Enter value for b");
	scanf("%d",&b);
	printf("\n\n\t Enter value for choice");
	scanf(" %c",&z);
	
	c=calcu(a,b,z);
	printf("\n\n\t Calculation %d",c);
} 
int calcu(int a,int b,char z){
	int c;
	switch(z){
		case '+':
		c=a+b;
		break;
		
		case '-':
		c=a-b;
		break;
		
		case '*':
		c=a*b;
		break;
		
		case '/':
		c=a/b;
		break;
		
		default:
		printf("Invalid");	
		break;
	}	
	return c;
}
