#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter values for a,b,c");
	scanf("%d %d %d",&a,&b,&c);
if(a+b>c && b+c>a && a+c>b){
	printf("Triangle can be formed");
}
else{
	printf("Triangle can't be formed'");
}

}
