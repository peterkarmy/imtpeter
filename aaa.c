#include<stdio.h>
#include"myfunctions1.h"
extern int sumresult;
extern int mulresult;
void main ()
{
 sum(5,10);
printf("%d",sumresult);
 mul(5,10);
printf("%d",mulresult);
}