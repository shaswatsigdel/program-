#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
    int a,i=0,s=0,r;
    printf ("enter the binary number");
    scanf ("%d",&a);
    while(a!=0)
   {
    r=a%10;
    s=s+r*pow(2,i);
    i=i+1;
    a=a/10;
  }

    printf ("%d",s);
}