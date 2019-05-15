#include<stdio.h>
struct book
{
	char title[30];
	char author[30];
	char genre[30];
} b;
void details()
{
	printf("\nYou entered\n");
	printf("Title: %s \nAuthor:%s \nGenre:%s \n",b.title,b.author,b.genre);
	
}
int main()
{
	
	printf("Enter the title,author and genre of the book\n");
    //scanf("%s%s%s",&b.title,&b.author,&b.genre);
    gets(b.title);
    gets(b.author);
    gets(b.genre);
	details();
	return 0;
}
