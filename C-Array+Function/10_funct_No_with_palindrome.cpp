//no argument with return type..
#include<stdio.h>
int pali();
main(){
	int x;
	x=pali();
	if(x==1){
		printf("\n\n\tPalindrome");
		}
		else{
			printf("\n\n\tNot Palindrome");
		}
	
}
int pali(){
	int n,y=0,rem,z;
	printf("\n\n\tEnter value for n");
	scanf("%d",&n);
	z=n;
	for(n=n;n>0;n=n/10){
		rem=n%10;
		y=(y*10)+rem;
	}
	if(y==z){
		return 1;
	}
	else{
		return 0;
	}
}
