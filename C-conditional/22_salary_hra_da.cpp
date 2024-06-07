#include<stdio.h>
int main(){
	int bs;
	float hra,da;
	printf("Enter Basic Salary");
	scanf("%d",&bs);
	if(bs<=10000){
		hra=(20*bs)/100;
		da=(80*bs)/100;
	printf("gs is %.2f",bs+hra+da);
	}
	else if(bs>10000 && bs<=20000){
		hra=(25*bs)/100;
		da=(90*bs)/100;
		printf("Gross Salary is %.2f",bs+hra+da);
	}
	else if(bs>20000){
		hra=(30*bs)/100;
		da=(95*bs)/100;
		printf("Gross Salary is %.2f",bs+hra+da);
	}
}