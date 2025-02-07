#include<stdio.h>
int main()
{
int x,y;
printf("Enter two numbers:");
scanf("%d %d",&x,&y);
if(x>0 && y>0)
{
printf("The point is in first quadrant.");
}
else if(x>0 && y<0)
{
printf("The point is in second quadrant.");
}
else if(x<0 && y<0)
{
printf("The point is in third quadrant.");
}
else
{
printf("The point is in fourth quadrant.");
}
return 0;
}
