#include<stdio.h>
main(){
	int x;
	for(x=1;x<=100;x++){
	//	printf(" %d ",x);
		if(x%10==0){
			printf(" %d\n",x);
		}
	else if(x>=1 && x<=9){
	printf(" %02d ",x);
}
else{
	printf(" %d ",x);
}
	}
}