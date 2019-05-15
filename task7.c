#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	printf("Enter the string\n");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	if(strcmp(s1,s2)==0)
	{
		printf("\nThe string is a pallindrome\n");
		
	}
	else
	{
		printf("\nThe string is not a pallindrome\n");
	}
	return 0;
}
