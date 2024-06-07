// with argument without return type ..Palindrome
#include<stdio.h>
void pali(int n);
main(){
	int n;
	printf("\n\n\tEnter value for n");
	scanf("%d",&n);
	pali(n);
}
void pali(int n){
	int rem,y=0,z;
z=n;
for(n=n;n>0;n=n/10)	
	{
		rem=n%10;
		y=(y*10)+rem;
	}
	if(y==z)
	printf("Palindrome");
	else
	printf("Not Palindrome");
}