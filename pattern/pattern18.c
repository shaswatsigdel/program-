#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    char c={'A'};
    for ( i = 1; i <=5 ; i++)
    {
       for ( j = 0; j <=5-i; j++)
       {
       printf ("%c",c+j);
       }
 for ( j = 1; (j<=2*i-3) ; j++)
       {
       printf (" ");
       }

for ( j = 5-i; j >=0 ; j--)
       {if (j==4)
       goto next ;  
       printf ("%c",c+j);
       next : ;
       }

       printf ("\n");
    }
    
}