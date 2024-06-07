//fibonacci series upto given number 0 1 1 2 3 5 8 13
#include<stdio.h>
int main(){
	int n,x=0,y=1,z,i;
	printf("\n\n\t Enter a number till user wish to print fibonacci series");
	scanf("%d",&n);
	
	for(z=0;z<=n;z=x+y){
		
		x=y;
		y=z;
		printf("\n\n\t %d",z);
		
	}
		
	
}