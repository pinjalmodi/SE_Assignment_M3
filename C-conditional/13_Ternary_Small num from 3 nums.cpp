#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter value for a,b,c");
	scanf("%d %d %d",&a,&b,&c);
(a<b && a<c)?
printf("A is small")
:(b<a && b<c)?
printf("B is small")
:
	printf("C is small");
}