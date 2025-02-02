#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    char c={'A'};
    for ( i = 0; i <5 ; i++)
    { 

     for ( j = 0; j <= i; j++)
      {
       printf ("%c",c+j);
       }
       
    printf ("\n");

}

}