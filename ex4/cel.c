#include<stdio.h>
int main()
{
int celsius,fahrenheit;
printf("Enter temperature in celsius:");
scanf("%d",&celsius);
fahrenheit=(celsius*9/5)+32;
printf("Temperature in fahrenheit is: %d \n",fahrenheit);
return 0;
}
