#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20],lname[10];
	printf("Enter your first name and last name\n");
	gets(fname);gets(lname);
	strcat(fname," ");
	strcat(fname,lname);
	printf("\nYour name is ");
	puts(fname);
	return 0;
}
