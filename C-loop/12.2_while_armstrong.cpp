#include<stdio.h>
main(){
	
	int x,z,c,i,s=0,rem;
	printf("\n\n\t Enter value for x");
	scanf("%d",&x);
	
	
	i=x;
	while(x!=0){
		rem=x%10;
		c=(rem*rem*rem);
		s=s+c;
		x=x/10;
	}
	
	if(s==i){
		printf("Armstrong No");
	}
	else{
		printf("Not Armstrong No");
	}
}