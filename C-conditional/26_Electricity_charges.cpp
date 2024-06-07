#include<stdio.h>
int main(){
	int units;
	float x,sur;
	printf("\n\n\t Enter units consumed");
	scanf("%d",&units);
	x=units*1.50;
	sur=(x*20)/100;
	
	if(units<=50){
		printf("\n\n\t Charges are %f",units*.50);
	}
	else if(units>50 && units<=150){
		printf("\n\n\t Charges are %f",units*.75);
	}
	else if(units>150 && units<=250){
		printf("\n\n\t Charges are %f",units*1.20);
	}
	else if(units>250){
		printf("\n\n\t Charges are %f",x+sur);
	}
}