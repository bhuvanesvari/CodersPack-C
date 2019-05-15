#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int age;
   char phone[10];
    printf("Enter your name, age, phone number in order\n");
    gets(name);
    scanf("%d ",&age);
    gets(phone);
    printf("Name: %s\nAge: %d\nPhone:%s\n",name,age,phone);
    return 0;
}
