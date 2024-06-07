#include<stdio.h>
int main(){
	int maths,phy,chem,total,mptotal;
	printf("\n\n\t Enter marks for maths,phy,chem\n\n\t");
	scanf("\n\n\t %d %d %d",&maths,&phy,&chem);
	
	total=maths+phy+chem;
	mptotal=maths+phy;
	printf("\n\n\t Total marks obtain %d",total);
	printf("\n\n\t Maths & Physics total is %d",mptotal);
if(maths>=65 && phy>=55 && chem>=50){
	if(total>=190 && mptotal>=140){
		printf("\n\n\t Candidate is eligible");
	}
	else{
	printf("\n\n\t Candidate is not eligible");
}
}
else{
	printf("\n\n\t Not Eligible");
	
}
}
