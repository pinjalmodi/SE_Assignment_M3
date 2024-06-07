#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char x[100];
	int maxchar[256]={0};
	char count;
	int len,i,maxcount=0;
	
	printf("\n\n\t Enter a string");
	gets(x);
	puts(x);
	
	len=strlen(x);
	for(i=0;i<len;i++){
		maxchar[x[i]]++;
	}
	
	for(i=0;i<len;i++){
		if(maxchar[x[i]]>maxcount){
		
		maxcount=maxchar[x[i]];
	count=x[i];
	}
		
	}
	printf("\nMax occuring character is %c",count);
}

