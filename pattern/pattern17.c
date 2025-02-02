#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    char c={'A'};
    int s=c; 
    for ( i = 0; i <5 ; i++)
    { 

     for ( j = 0; j <= i; j++)
      {
       printf ("%c",s);
       s=s+1;
       }
       
    printf ("\n");

}

}