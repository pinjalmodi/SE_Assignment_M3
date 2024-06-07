#include<stdio.h>
int main(){
	int trans;
	printf("Enter transaction Amount");
	scanf("%d",&trans);
	if(trans>0 && trans<1000){
		printf("Profit");
	}
	else{
		printf("Loss");
	}
}