#include<stdio.h>
int small(int[],int);
int large(int[],int);

int main()
{
	int a[10],n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("\nEnter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe smallest number in the array is %d",small(a,n));
	printf("\nThe largest number in the array is %d",large(a,n));
	return 0;
}
int large(int a[],int n)
{
	int l,i;
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	return l;
}
int small(int a[],int n)
{
	int s,i;
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
		}
	}
	return s;
}
