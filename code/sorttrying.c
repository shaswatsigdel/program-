#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,j,temp;
    for ( i = 0; i < 8; i++)
    {
    scanf ("%d",&a[i]);
    }
    
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j <7; j++)
        {
           if (a[j]>a[j+1])
           {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
           
        }
        
    }
  for ( i = 0; i < 8; i++)
    {
    printf ("%d \t",a[i]);
    }  
}