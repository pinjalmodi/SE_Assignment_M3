//with argument no return type
#include<stdio.h>
void maximum(int a[5]);
main(){
	int i,a[5];
	for(i=0;i<5;i++){
		printf("\n\n\tEnter value for array");
		scanf("%d",&a[i]);
		
	}
	maximum(a);
}
void maximum(int a[5]){
	int i,max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max)
		max=a[i];
	}
	printf("\n\n\tMax is %d",max);
}