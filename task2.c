#include<stdio.h>
int main()
{
    float cel,far;
    printf("Enter the temperature in celsius\n");
    scanf("%f",&cel);
    far=(9*cel/5)+32;
    printf("\nTemperature in Farenheit %f",far);

    return 0;
}
