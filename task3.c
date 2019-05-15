#include<stdio.h>
int main()
{
	float m1,m2,m3,sum,avg;
	printf("Enter the marks in 3 subjects in order\n");
	scanf("%f%f%f",&m1,&m2,&m3);
	sum=m1+m2+m3;
	avg=sum/3;
	printf("\nSum : %f \nAverage: %f",sum,avg);
	return 0;
}
