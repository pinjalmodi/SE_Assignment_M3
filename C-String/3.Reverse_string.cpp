//WAP in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
main(){
	char name[20];
	int i,j,len;
	
	printf("\n\n\t Enter a name");
	gets(name);
	puts(name);
	len=strlen(name);
	printf("%d",len);
	
	for(i=0,j=len-1;i<=j;i++,j--){
			char c=name[i];
			name[i]=name[j];
			name[j]=c;
}
		printf("Reverse is %s",name);	

}