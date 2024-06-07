#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("\n\n\t Enter three numbers");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2){
		if(n1>n3){
			printf("%d is max",n1);
		}
		else{
			printf("%d is max",n3);
		}
	}
		else {
		if(n2>n3){
			printf("%d is max",n2);
		}
		else{
			printf("%d is max",n3);
	 }
	}

}