#include <stdio.h>

void main(void) {
int n;
printf("enter your no.");
scanf("%d",&n);
if(n<0)
{
printf("no. is negative");
}
else if(n>0)
{
printf("no. is positive");
}
else
{
printf("no. is zero");
}
