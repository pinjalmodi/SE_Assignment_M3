#include<stdio.h>
int main(){
	int maths,phy,chem,total,t1;
	printf("\n\n\t Enter marks of maths");
	scanf("%d",&maths);
	printf("\n\n\t Enter marks of phy");
	scanf("%d",&phy);
	printf("\n\n\t Enter marks of maths");
	scanf("%d",&chem);
if(maths>=65 && phy>=55 && chem>=50){
	printf("\n\n\t Marks Approved");
}
else{
	printf("\n\n\t Marks Not Approved");
}
total=maths+phy+chem;
t1=maths+phy;
if (total>=190 & t1>=140){
	printf("\n\n\t Eligible");
	
}
else{
	printf("\n\n\t Not Eligible");
}
}