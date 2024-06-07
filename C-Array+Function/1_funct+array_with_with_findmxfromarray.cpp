// Write a program to find out the max number from given array using function
//with argument with return type
#include<stdio.h>
int max(int x[5]);
main(){
	int x[5],i,ma;
	for(i=0;i<5;i++){
printf("\n\n\t Enter value for array");
scanf("%d",&x[i]);
}
ma=max(x);
printf("\n\n\t Max is %d",ma);
}
int max(int x[5]){

int i,ma=x[0];
for(i=0;i<5;i++){
		if(x[i]>ma)
			ma=x[i];
	}

		return ma;
}

