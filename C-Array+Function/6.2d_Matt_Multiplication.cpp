//multiplication of two dimentional array
#include<stdio.h>
main(){
	int x[3][3],y[3][3],r,c,mul[3][3],k;
	
	printf("\n\n\tEnter value for ......Matrix 1...........\n\n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("\n\n\t Enter values for x[%d][%d] is",r,c);
			scanf("%d",&x[r][c]);
		}
	}
	printf("\n\n\tEnter value for ......Matrix 2...........\n\n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("\n\n\t Enter values for y[%d][%d] is",r,c);
			scanf("%d",&y[r][c]);
		}
	}
	printf("\n\n\t............Matrix 1...........\n\n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("\t%d",x[r][c]);
		}
		printf("\n");
	}
	printf("\n\n\t............Matrix 2...........\n\n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("\t%d",y[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			mul[r][c]=0;
			for(k=0;k<3;k++){
			
	
	mul[r][c]=mul[r][c]+(x[r][k]*y[k][r]);
}
}
printf("\n");
}

for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("\t%d",mul[r][c]);
		}
		printf("\n");
	}
}
