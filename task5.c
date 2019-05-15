#include<stdio.h>
int main()
{
	int n,n1,i,ans;
	ans=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
	   n1=n%10;
	   n=n/10;
	   ans=ans*10+n1;
	   
    }
    printf("\n The number in reverse is %d",ans);
	return 0;
}
