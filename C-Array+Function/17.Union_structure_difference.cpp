#include<stdio.h>

union student
{
	int rollno;
	char sname[20];
	int sub[5];
	float per;
	char grade;
}S;

main(){
	int i,total=0;
	printf("\n\n\t Input roll no");
	scanf("%d",&S.rollno);
	printf("\n\n\t Input name");
	scanf("%s",&S.sname);
	for(i=0;i<5;i++){
		printf("\n\n\t Enter Sub marks [%d]",i+1);
		scanf("%d",&S.sub[i]);
		total=total+S.sub[i];
	}
	S.per=total/5;
	
	printf("\n\n\t Per is %f",S.per);
	
	printf("\n\n\tRollNo:%d",S.rollno);
	printf("\n\n\tName:%s",S.sname);
	for(i=0;i<5;i++){
	printf("\n\n\tMarks:%d",S.sub[i]);
}
	printf("\n\n\t%Percentage:%f",S.per);

	
	
}