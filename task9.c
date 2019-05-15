#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter the number\n");
	scanf("%d",&n);
	f=fact(n);
	printf("\n Factorial:%d ",f);
}
//ordinary factorial
/*int fact(int a)
{
	int i,f;
	f=1;
	for(i=a;i>0;i--)
	{
		f=(f*i);
		
	}
	return f;
}*/
//factorial using recursion
int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	   return n*(fact(n-1));
}
