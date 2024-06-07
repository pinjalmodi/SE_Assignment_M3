#include<stdio.h>
#include<string.h>
main(){
char x[100],lg[100],sh[100];
int llen=0,shlen=100;
printf("\n\n\t Enter value for x");
gets(x);

//x[strcspn(x,"\n")]='\0';
char *token=strtok(x," ");
while (token!=NULL)
{
	int to_len=strlen(token);
	
	if(to_len>llen){
		llen=to_len;
		strcpy(lg,token);
	}
	if(to_len<shlen){
		shlen=to_len;
		strcpy(sh,token);
	}
	token=strtok(NULL," ");
}
printf("\n\n\t Longest word %s",lg);
printf("\n\n\t Shortest word %s",sh);
}