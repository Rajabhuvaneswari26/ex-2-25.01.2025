#include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
printf("%c is a lowercase.\n",ch);
}
else if(ch>='A' && ch<='Z')
{
printf("%c is a uppercase.\n",ch);
}
else if(ch>='0' && ch<='9')
{
printf("%c is a number \n",ch);
}
else
{
printf("invalid");
}
return 0;
}
