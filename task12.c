#include<stdio.h>
int main()
{
	float cel,far;int choice;
	do
	{
		printf("Enter 1- to convert celsius to farenheit\n2- to convert farenheit to celsius\n3- Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("Enter the temperature in celsius\n");
                    scanf("%f",&cel);
                    far=(9*cel/5)+32;
                    printf("\nTemperature in Farenheit %f\n",far);
                    break;
				}
			case 2:
				{
					printf("Enter the temperature in Farenheit\n");
                    scanf("%f",&far);
                    cel=5*(far-32)/9;
                    printf("\nTemperature in celsius %f\n",cel);
                    break;
				}
			case 3:
				break;
			default:
				printf("Enter a valid option\n");
		}
	}while(choice!=3);
	return 0;
	}

