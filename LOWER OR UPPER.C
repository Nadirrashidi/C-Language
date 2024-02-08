// check character is lowercase or upper case
#include<stdio.h>
int main()
{
	char ch;
	printf("enter A character\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("upper case letter:\n");
	}
	else if(ch>='a' && ch<='z')
	{
		printf(" lower case letter: \n");
	}
	else 
	printf("its not a english character\n");
}
