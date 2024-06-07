//Write a program of structure employee that provides the following 
//a. information -print and display empno, empname, address andage 

#include<stdio.h>
struct employee{
int empno;
char empname[50];
char add[100];
int age;	
}em;
main(){
	printf("\n\n\t Enter Employee No");
	scanf("%d",&em.empno);
	printf("\n\n\t Enter Employee name");
	scanf("%s",&em.empname);
	printf("\n\n\t Enter Employee Add");
	scanf("%s",&em.add);
	printf("\n\n\t Enter Employee Age");
	scanf("%d",&em.age);
	
	printf("\n\n\t %d",em.empno);
	printf("\n\n\t %s",em.empname);
	printf("\n\n\t %s",em.add);
	printf("\n\n\t %d",em.age);
	
}
