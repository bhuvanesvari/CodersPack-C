#include<stdio.h>
void multable(int );
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	multable(n);
	return 0;
}
void multable(int m)
{
	int i;
	for( i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",m,i,(m*i));
	}
}
