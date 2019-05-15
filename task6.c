#include<stdio.h>
#include<math.h>
int main()
{
	int n,n1,n2,s,r,c;
	n1=0;
	s=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	r=n;
	while(n>0)
	{
		n2=n%10;
	   n=n/10;
	   n1=(n1*10)+n2;
		c++;
	}
	while(n1>0)
	{
		n=n1%10;
		s+=pow(n,c);
		n1/=10;
	}
	
	if(s==r)
	{
		printf("The number is an armstrong number \n");
	}
	else
	{
		printf("The number isn't an armstrong number %d %d\n",s,r);
	}
	
	return 0;
}
