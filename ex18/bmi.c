#include<stdio.h>
int main()
{
float height,weight,bmi;
printf("enter the height:");
scanf("%f",&height);
printf("enter th weight:");
scanf("%f",&weight);
bmi=weight/height*height;
if(bmi<=18.5)
{
printf("Undreweight\n");
}
else if(bmi>18.5 && bmi<=24.9)
{
printf("Normal weight\n");
}
else 
{
printf("Obese\n");
}
return 0;
}

