#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,c;
    for ( i = 1; i <=5 ; i++)
    { 
        for ( j= 5; j >i ; j--)
    {

        printf (" \t ");
    }


       for ( j = 1; j <= i; j++)
       {if (j%2==0){
        c=1;
    }
        else 
        c=0; 
       printf (" %d\t ",c);
       }
       printf ("\n");
    }
    
}