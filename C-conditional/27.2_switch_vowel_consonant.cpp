#include<stdio.h>
int main(){
	char x;
	
	printf("\n\n\t Enter a character\n\n\t");
	scanf("%c",&x);
	
	switch(x){
		case 'a':printf("\n\n\t Vowel");
		break;
		case 'e':printf("\n\n\t Vowel");
		break;
		case 'i':printf("\n\n\t Vowel");
		break;
		case 'o':printf("\n\n\t Vowel");
		break;
		case 'u':printf("\n\n\t Vowel");
		break;
		case 'A':printf("\n\n\t Vowel");
		break;
		case 'E':printf("\n\n\t Vowel");
		break;
		case 'I':printf("\n\n\t Vowel");
		break;
		case 'O':printf("\n\n\t Vowel");
		break;
		case 'U':printf("\n\n\t Vowel");
		break;
		default :printf("\n\n\t Consonant");
		break;		
	}
}