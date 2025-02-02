#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
   char c={'A'};
    for ( i = 5; i >=1 ; i--)
    {
       for ( j = 1; j <=i; j++)
       {
       printf ("%d%c",j,c+j-1);
       }
       printf ("\n");
    }
    
}