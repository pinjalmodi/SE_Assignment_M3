#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	
	printf("\n\n\t 1.Monday");
	printf("\n\n\t 2.Tuesday");
	printf("\n\n\t 3.wednesday");
	printf("\n\n\t 4.Thursday");
	printf("\n\n\t 5.Friday");
	printf("\n\n\t 6.Saturday");
	printf("\n\n\t 7.Sunday");
	printf("\n\n\t 0.Exit");
	
	
	printf("\n\n\t Enter number for x");
	scanf("%d",&x);
	
	
	
	switch(x){
		case 1: printf("\n\n\t Monday");
		break;
		case 2: printf("\n\n\t Tuesday");
		break;
		case 3: printf("\n\n\t Wednesday");
		break;
		case 4: printf("\n\n\t Thursday");
		break;
		case 5: printf("\n\n\t Friday");
		break;
		case 6: printf("\n\n\t Saturday");
		break;
		case 7: printf("\n\n\t Sunday");
		break;
		case 0: exit(0);
		default: printf("\n\n\t Wrong Entry");
		break;
	}
}