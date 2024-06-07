#include<stdio.h>
int main(){
	int id,unit;
	char name;
	printf("\n\n\t Enter Customer id");
	scanf("%d",&id);
	printf("\n\n\t Enter units consumed");
	scanf("%d",&unit);
	printf("\n\n\t Enter Customer Name");
	scanf(" %c",&name);
	
	if(unit<350){
		printf("\n\n\t Amount to be paid is %.2f",(unit*1.20));
	}
	else if(unit>=350 && unit<600){
		printf("\n\n\t Amount to be paid is %.2f",(unit*1.50));
	}
	else if(unit>=600 && unit<800){
		printf("\n\n\t Amount to be paid is %.2f",(unit*1.80));
	}
	else if(unit>=800){
		printf("\n\n\t Amount to be paid is %.2f",(unit*2.00));
	}
	
}