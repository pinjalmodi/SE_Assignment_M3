//Palindrome..with aregument with return type
#include<stdio.h>
int pali(int a);
main(){
int a,x;
printf("\n\n\t Enter value for a\n\n");
scanf("%d",&a);
x=pali(a);
if(x==1)
printf("\n\n\tPalindrome");
else
printf("\n\n\tNot Palindrome");
	

	
}
int pali(int a){
	int z,rem,y=0;
	z=a;
	for(a=a;a>0;a=a/10){
		rem=a%10;
		y=(y*10)+rem;
	}
	if(y==z)
		return 1;
	else
	return 0;
}