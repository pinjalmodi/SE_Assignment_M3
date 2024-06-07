//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 
#include<stdio.h>
main(){
	int x[2][2],y[2][2],i,j;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("Enter values for matrix x[%d][%d]",i,j);
		scanf("%d",&x[i][j]);
	}
}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("Enter values for matrix y[%d][%d]",i,j);
		scanf("%d",&y[i][j]);
	}
}
printf("\n\n\t..........First Matrix...............\n\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\t%d",x[i][j]);
	}
	printf("\n");
}

printf("\n\n\t..........Second Matrix...............\n\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\t%d",y[i][j]);
	}
printf("\n");	
}
printf("\n\n\t..........Addition.............\n\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\t%d",x[i][j]+y[i][j]);
}
printf("\n");
}
printf("\n\n\t.........Subtraction............\n\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
printf("\t%d",x[i][j]-y[i][j]);
}
printf("\n");
}
printf("\n\n\t........Multiplication............\n\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\t%d",x[i][j]*y[i][j]);
}
printf("\n");
}
}

