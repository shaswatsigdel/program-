#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,j;
    char c={'A'}; 
    for ( i = 0; i <5 ; i++)
    {
        for ( j= i; j <4 ; j++)
    {

        printf (" ");
    }
       for ( j =0; j <=i; j++)
       {
       printf ("%c",c+j);
       
       }
       

       for ( j =j-2; j >=0; j--)
       {
       printf ("%c",c+j);
       
       } 
       printf ("\n");
    }}