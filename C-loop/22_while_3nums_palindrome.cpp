//Accept 3 numbers from user using while loop and check each numbers palindrome 
#include<stdio.h>
main(){
	int x[3],i,y=0,rem,j;

for(i=0;i<3;i++){
scanf("%d",&x[i]);
}

for(i=0;i<3;i++){
	y=0;
j=x[i];		
	while(j>0){
	rem=j%10;
	y=(y*10)+rem;
	j=j/10;	
}
if(x[i]==y){
printf("%d is Palindrome\n\n",y);
	}
	else{
		printf("%d is Not Palindrome\n\n",y);
}

}

}
