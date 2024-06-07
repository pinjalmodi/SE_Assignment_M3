#include<stdio.h>
int main(){
	int x,i,sum=0,rem,s;
	printf("\n\n\t Enter a number");
	scanf("%d",&x);
	
	for(i=x;i!=0;i=i/10){
		rem=i%10;
		s=rem*rem*rem;
		sum=sum+s;
	}
	if(sum==x){
		printf("\n\n\t Armstrong Number");
	}
	else{
		printf("\n\n\t Not an Armstrong Number");
	}
}