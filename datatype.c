#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
printf("Size of int : %lu bytes \n", sizeof(int));
printf("Range of int : %d to %d \n", INT_MIN, INT_MAX);
printf("Size of char : %lu bytes \n", sizeof(char));
printf("Range of char : %d to %d \n", CHAR_MIN, CHAR_MAX);
printf("Size of float : %lu bytes \n", sizeof(float));
printf("Range of float : %e to %e \n ", FLT_MIN, FLT_MAX);
printf("Size of double : %lu bytes \n", sizeof(double));
printf("Range of double : %e to %e \n", DBL_MIN, DBL_MAX);
printf("Size of short : %lu bytes \n", sizeof(short));
printf("Range of short: %d to %d \n", SHRT_MIN, SHRT_MAX);
}
