#include<stdio.h>
int main()
{
	char s[5];
	printf("\n Enter any operator:");
	scanf("%s",s);
	switch(s[0])
	{
		case '>':if(s[1]=='=')
			 printf("\nGreater than or eual");
			 else
			 printf("\n Greater than");
			 break;
		case '<':if(s[1]=='=')
			 printf("\nLess than or eual");
			 else
			 printf("\nLess than");
			 break;
		case '=':if(s[1]=='=')
			 printf("\nEqual to");
			 else
			 printf("\nAssignment");
			 break;
		case '!':if(s[1]=='=')
			 printf("\nNot Equal");
			 else
			 printf("\nBit Not");
			 break;
		case  '&':if(s[1]=='&')
			 printf("\nLogical AND");
			 else
			 printf("\nBitwise AND");
			 break;
		case '|':if(s[1]=='|')
			 printf("\nLogical OR");
			 else
			 printf("\nBitwise OR");
			 break;
		case '+':printf("\n Addition");
			 break;
		case '-':printf("\n Subtraction");
			 break;
		case '*':printf("\n Multiplication");
			 break;
		case '/':printf("\n Division");
			 break;
		case '%':printf("\n Modulus");
			 break;
		default: printf("\n Not above mentioned operator");
	}
}
