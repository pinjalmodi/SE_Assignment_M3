#include<stdio.h>
main(){
	int i,j;
for(i=01;i<=50;i++){	
		if(i%10==0){
	printf(" %d \n",i);
}
else if(i>=1 && i<=9){
	printf(" %02d",i);
}
else{
	printf(" %d",i);
}
}
	}
