#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	
	printf("\n\n\t 1.January");
	printf("\n\n\t 2.February");
	printf("\n\n\t 3.March");
	printf("\n\n\t4.April");
	printf("\n\n\t 5.May");
	printf("\n\n\t 6.June");
	printf("\n\n\t 7.July");
	printf("\n\n\t 8.August");
	printf("\n\n\t 9.September");
	printf("\n\n\t 10.October");
	printf("\n\n\t 11.November");
	printf("\n\n\t 12.December");
	printf("\n\n\t 0.Exit");
	printf("Enter Number to print month");
	scanf("%d",&x);

	switch(x){
		case 1: printf("\n\n\t January");
		break;
		case 2: printf("\n\n\t February");
		break;
		case 3: printf("\n\n\t March");
		break;
		case 4: printf("\n\n\t April");
		break;
		case 5: printf("\n\n\t May");
		break;
		case 6: printf("\n\n\t June");
		break;
		case 7: printf("\n\n\t July");
		break;
		case 8: printf("\n\n\t August");
		break;
		case 9: printf("\n\n\t September");
		break;
		case 10: printf("\n\n\t October");
		break;
		case 11: printf("\n\n\t November");
		break;
		case 12: printf("\n\n\t December");
		break;		
		case 0: exit(0);
		break;
		default: printf("\n\n\t Wrong Entry");
	}


}