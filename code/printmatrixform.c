#include<stdio.h>
#include <conio.h>
void main()
{ int a[3][4],i,j;
printf ("enter the number");
for ( i = 0; i < 3; i++)

{
    for ( j = 0; j < 4; j++)
    {
        scanf ("%d",&a[i][j]);
    }}

  for ( i = 0; i < 3; i++)

{
    for ( j = 0; j < 4; j++)
     {
        printf ("%d \t",a[i][j] );
     } printf ("\n"); 
}
}