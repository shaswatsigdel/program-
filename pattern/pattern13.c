#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,c;
    for ( i = 1; i <=5 ; i++)
    { 

     for ( j = 1; j <= i; j++)
       {if (j%2==0){
        c=1;
    }
        else 
        c=0; 
       printf ("%d",c);
       }
       
    

        for ( j= 10; j >2*i ; j--)
    {

        printf (" ");
    }
 for ( j = 1; j <= i; j++)
       {if (j%2==0){
        c=1;
    }
        else 
        c=0; 
       printf ("%d",c);
       }
       printf ("\n");
    }
}

