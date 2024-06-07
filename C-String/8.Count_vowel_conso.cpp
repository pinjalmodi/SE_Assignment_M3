//WAP in C to count the total number of vowels or consonants in a string
#include<stdio.h>
main(){
	char x[50],vow=0,conso=0;
	int i;
	printf("\n\n\t Enter x");
	gets(x);
	
	for(i=0;x[i]!='\0';i++){
		if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
		
		vow++;
	}
	
	else{
		conso++;
	}
}
printf("\n\n\t Vowels %d",vow);
printf("\n\n\t Consonanats %d",conso);
}