#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter three sides:");
scanf("%d %d %d", &x,&y,&z);
if(x==y && y==z && x==z)
{
printf("Triangle is equilateral. \n");
}
else if(x==y || y==z || x==z)
{
printf("Triangle is isosceles. \n");
}
else
{
printf("Triangle is scalene. \n");
}
return 0;
}
