#include<stdio.h>
int main()
{
int principal,rate,time;
float interest;
printf("Enter principal amount:");
scanf("%d",&principal);
printf("Enter rate:");
scanf("%d",&rate);
printf("Enter time in years:");
scanf("%d",&time);
interest=principal*rate*time;
printf("Simple interest is: %f \n",interest);
return 0;
}
