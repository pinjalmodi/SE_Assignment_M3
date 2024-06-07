//two Array input from user and sort them in ascending or descending order as per user’s choice 
#include<stdio.h>
main(){
	int x[3],y[3],i,j,temp=0;
	char z;
	for(i=0;i<3;i++){
		printf("Enter value for x[%d]",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t....Stored numbers........\n\n");
	for(i=0;i<3;i++){
		printf("\n\n\t%d",x[i]);
	}
	printf("\n\n\t....a for ascending.......\n\n");
	printf("\n\n\t....d for descending......\n\n");
	printf("\n\n\t Enter your choice a or d");
	scanf(" %c",&z);
	switch(z){
		case 'a':
			for(i=0;i<3;i++){
				for(j=i+1;j<3;j++){
					if(x[i]>x[j]){
						temp=x[i];
						x[i]=x[j];
						x[j]=temp;
						
					}
					
				}
				
			}
			for(i=0;i<3;i++){
			printf("\n\n\t%d",x[i]);
				
			}
			break;
	
			case 'd':
			for(i=0;i<3;i++){
				for(j=i+1;j<3;j++){
					if(x[i]<x[j]){
						temp=x[i];
						x[i]=x[j];
						x[j]=temp;
							
					}	
					
				}
				
			}
			for(i=0;i<3;i++){
			printf("\n\n\t%d",x[i]);
			
		}
		break;
			default:
				printf("\n\n\tWrong Entry");
				break;	
		}
	}
