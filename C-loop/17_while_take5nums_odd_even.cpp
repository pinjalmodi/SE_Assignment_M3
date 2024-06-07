// Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
main(){
	int i,x[5];
	
	i=0;
	while(i<5){
	scanf("%d",&x[i]);
	i++;
}
for(i=0;i<5;i++){

	if(x[i]%2==0){
		printf("\n\n\t%d is Even",x[i]);
	}
	else{
		printf("\n\n\t%d is odd",x[i]);
	}
}
}