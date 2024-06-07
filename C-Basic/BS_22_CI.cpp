#include<stdio.h>
#include<math.h>
main(){
	int p;
	float r,t,amt,ci;
	printf("\n\n\t Enter principal");
	scanf("%d",&p);
	printf("\n\n\t Enter rate");
	scanf("%f",&r);
	printf("\n\n\t Enter time");
	scanf("%f",&t);
	
	amt=p*((pow((1+(r/100)),t)));
	ci=amt-p;
	printf("\n\n\t Compound Interest is %f",ci);
	
}