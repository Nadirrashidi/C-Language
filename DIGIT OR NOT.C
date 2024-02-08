// check entered character is digit or not
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the chracter\n");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	{
		printf("this is digit");
	}
	else 
	{
		printf("other than digit");
	}
}
