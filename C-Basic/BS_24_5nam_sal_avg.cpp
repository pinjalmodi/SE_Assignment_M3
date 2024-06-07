#include<stdio.h>
main(){
	char n1,n2,n3,n4,n5;
	int s1,s2,s3,s4,s5,tot;
	float avg;
	
	printf("\n\n\t Enter name 1");
	scanf("%s",&n1);
	printf("\n\n\t Enter salary");
	scanf(" %d",&s1);

	printf("\n\n\t Enter name 2");
	scanf("%s",&n2);
	printf("\n\n\t Enter salary");
	scanf("%d",&s2);

	printf("\n\n\t Enter name 3");
	scanf("%s",&n3);
	printf("\n\n\t Enter salary");
	scanf("%d",&s3);

	printf("\n\n\t Enter name 4");
	scanf("%s",&n4);
	printf("\n\n\t Enter salary");
	scanf("%d",&s4);

	printf("\n\n\t Enter name 5");
	scanf("%s",&n5);
	printf("\n\n\t Enter salary");
	scanf("%d",&s5);

	tot=s1+s2+s3+s4+s5;
	
	avg=tot/5;
	
	printf("\n\n\t Total salary is %d",tot);
	printf("\n\n\t Average salary is %f",avg);


}