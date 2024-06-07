#include<stdio.h>
int main(){
	int x;
	printf("\n\n\t Enter Number to print days in that month");
	scanf("%d",&x);
	
	switch(x){
		case 1: printf("\n\n\t 31");
		break;
		case 2: printf("\n\n\t 28");
		break;
		case 3: printf("\n\n\t 31");
		break;
		case 4: printf("\n\n\t 30");
		break;
		case 5: printf("\n\n\t 31");
		break;
		case 6: printf("\n\n\t 30");
		break;
		case 7: printf("\n\n\t 31");
		break;
		case 8: printf("\n\n\t 31");
		break;
		case 9: printf("\n\n\t 30");
		break;
		case 10: printf("\n\n\t 31");
		break;
		case 11: printf("\n\n\t 30");
		break;
		case 12: printf("\n\n\t 31");
		break;
		default: printf("\n\n\t Wrong Entry");
	}
}