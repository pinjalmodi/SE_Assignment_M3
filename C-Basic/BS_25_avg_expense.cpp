#include<stdio.h>
main(){
	int e1,e2,e3,e4,e5,avg;
	printf("\n\n\tEnter Expense 1\n\n");
	scanf("%d",&e1);
	printf("\n\n\tEnter Expense 2\n\n");
	scanf("%d",&e2);
	printf("\n\n\tEnter Expense 3\n\n");
	scanf("%d",&e3);
	printf("\n\n\tEnter Expense 4\n\n");
	scanf("%d",&e4);
	printf("\n\n\tEnter Expense 5\n\n");
	scanf("%d",&e5);
	avg=(e1+e2+e3+e4+e5)/5;
	printf("\n\n\taverage expense is %d",avg);
	
}