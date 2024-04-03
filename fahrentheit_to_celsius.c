#include<stdio.h>
int main()
{
float fahrenhet, celsius;
printf("Enter Fahrenhet : ");
scanf("%f",&fahrenhet);
celsius = (fahrenhet - 32) * 5/9;
printf("\nCelsius = %f\n",celsius);
}
