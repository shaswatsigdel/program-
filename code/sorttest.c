#include<stdio.h>
#include <conio.h>
void main()
{ int a[10],i,j,temp;
for ( i = 0; i < 10; i++)
{
   scanf ("%d",&a[i]);

}
for ( i = 0; i < 10; i++)
{
   for ( j = 0; j < 9; j++)
   {
   if (a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
   
   }
   
}
for ( i = 0; i < 10; i++)
{
   printf ("%d \t ",a[i]);

}
}
