//table up to given number
#include<stdio.h>
int main(){
	int n,x,i;
	printf("\n\n\t Enter n number up till you want table \n\n\t");
	scanf("%d",&n);
	printf("\n\n\t Enter a number you want table of \n\n\t");
	scanf("%d",&x);
	
	for(i=1;i<=n;i++){
		printf("\n\n\t %d * %d = %d",x,i,x*i);
	}
}