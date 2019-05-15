#include<stdio.h>
int main()
{
	int i,n;
    n=12345;
	while(n>0)
	{
		printf("%d",n);
		printf("\n");
		n=n/10;
	}
	return 0;
}
