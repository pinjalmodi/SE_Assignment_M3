// Structure b. WAP of structure for five employee that provides the following information -
//print and display empno, empname, address andage
#include<stdio.h>
struct emp{
	int empno;
	char empname[50];
	char add[100];
	int age;
}em[5];

main(){
	int i;
	for(i=0;i<5;i++){
	printf("\n\n\t Enter Emp no");
	scanf("%d",&em[i].empno);
	printf("\n\n\t Enter emp name");
	scanf("%s",&em[i].empname);
	printf("\n\n\t Enter emp add");
	scanf("%s",&em[i].add);
	printf("\n\n\t Enter age");
	scanf("%d",&em[i].age);
}
	printf("\n\n\t....5 Employee details..............");
	for(i=0;i<5;i++){
		printf("\n\n\tEmp No %d",em[i].empno);
		printf("\n\n\tEmp Name %s",em[i].empname);
		printf("\n\n\tEmp Address %s",em[i].add);
		printf("\n\n\tEmp Age %d",em[i].age);
		printf("\n\n........");
	}	
	
}