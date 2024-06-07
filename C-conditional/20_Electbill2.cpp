#include<stdio.h>
int main(){
	int bill;
	float sur;
	printf("Enter bill Amount");
	scanf("%d",&bill);
	if(bill>800){
		sur=(bill*18)/100;
		printf("Amount to be paid is %.2f",bill+sur);
	}
}