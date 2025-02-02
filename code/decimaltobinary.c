#include <stdio.h>
#include <conio.h>
void main()
{ int a,b,rev=0,r;
printf ("enter the number ");
scanf ("%d",&a);

while (a!=0)
{
   r=a%2;
   rev=rev*10+r;
   a=a/2;
   }r=0;
   a=rev;
   rev=0;
while (a!=0)
{
   r=a%10;
   rev=rev*10+r;
   a=a/10;
   }

   printf ("%d",rev);
}