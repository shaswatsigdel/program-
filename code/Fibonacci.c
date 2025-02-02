#include <stdio.h>
#include <conio.h>
void main()
{
    int a=1,b=1,c,i;
    
 for ( i = 1; i<=10; i++)
 {
   printf ("%d \t",a);
   c=a+b;
   a=b;
   b=c;
 }
 
}