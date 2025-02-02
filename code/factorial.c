#include<stdio.h>
#include <conio.h>
void main()
{ int a,c=0,i,s=1;
printf ("enter the number");
scanf ("%d",&a);
for ( i = 1; i <=a; i++)
{  
    s=s*i;
 }
 printf ("%d",s);
}