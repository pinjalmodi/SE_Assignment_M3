//store 5 numbers in an array and sort in ascending order

#include<stdio.h>
main(){
	int x[5],i,temp=0,j;
	
	for(i=0;i<5;i++){
		printf("\n\n\tEnter 5 numbers from x[%d]",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t..........Stored Numbers.............");
	for(i=0;i<5;i++){
		printf("\n\n\t%d",x[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
		
		if(x[i]>x[j]){
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;			
		}
	}
}
printf("\n\n\t........Ascending Order..............");
for(i=0;i<5;i++){
printf("\n\n\t%d",x[i]);
}

}