#include<stdio.h>
#include<string.h>
main(){
	char name[50];
	int len,count,i;
	printf("\n\n\t Enter name");
	gets(name);
	puts(name);
	len=strlen(name);
	
	for(i=0;i<=len;i++){
		if(name[i]==' '){
			count++;
		}
	}
	printf("%d",count+1);
}