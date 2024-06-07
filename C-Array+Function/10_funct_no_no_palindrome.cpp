//without argument without return type . Palindrome
#include<stdio.h>
void pali();
main(){
	pali();
}
void pali(){
	int x,z,rem,y=0;
	printf("\n\n\t Enter a number\n\n");
	scanf("%d",&x);
	z=x;
	for(x=x;x>0;x=x/10){
		rem=x%10;
		y=(y*10)+rem;
	}
	if(y==z)
	printf("\n\n\tPalindrome");
	else
	printf("\n\n\tNot Palindrome");
}