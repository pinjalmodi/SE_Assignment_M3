#include<stdio.h>
int main(){
	int x[10],i,count=0,odd=0,se,so=0;
	printf("Enter 10 numbers");
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
	
	if(x[i]%2==0){	
	count++;
}
else{
	odd++;
}
}
	printf("\n\n\t Total even Numbers are %d",count);
	printf("\n\n\t Total odd Numbers are %d",odd);	
	}
	