//WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>
main(){
	char x[50],temp,z[50];
	int len,i,j;
	
	printf("\n\n\t Enter value for x");
	gets(x);
	
	len=strlen(x);
	strcpy(z,x);
	for(i=0,j=len-1;i<=j;i++,j--){
	
	temp=x[i];
	x[i]=x[j];
	x[j]=temp;
}
	printf("\n\n\tReverse of the string is %s",x);
	
	if(strcmp(z,x)==0){
		printf("\n\n\tPalindrome");
	}
		else{
			printf("\n\n\t Not Palindrome");
		}
}