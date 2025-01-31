#include<stdio.h>
int main()
{
int num1,num2;
int sum;
printf("Enter num1:");
scanf("%d",&num1);
printf("Enter num2:");
scanf("%d",&num2);
sum=num1+num2;
printf("sum= %d \n",sum);

if(sum%5==0)
{
printf("The number is divisible by 5");
}
else
{
printf("the number is not divisible by 5");
}
return 0;
}
