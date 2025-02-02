#include<stdio.h>
#include <conio.h>
void main()
{ int a[3][3],b[3][3],c[3][3],d,i,j,k;
printf ("enter the number");
for ( i = 0; i < 3; i++)

{
    for ( j = 0; j < 3; j++)
    {
        scanf ("%d",&a[i][j]);
    }}
    printf ("enter the number");
    for ( i = 0; i < 3; i++)

{
    for ( j = 0; j < 3; j++)
    {
        scanf ("%d",&b[i][j]);
    }}
for ( i = 0; i < 3; i++)

{
    for ( j = 0; j < 3; j++)
    { d=0;
 for ( k = 0; k < 3; k++)
 {
   d=d+a[i][k]*b[k][j];
   c[i][j]=d;
 }
 
    }
    
}
  for ( i = 0; i < 3; i++)

{
    for ( j = 0; j < 3; j++)
     {
        printf ("%d \t",c[i][j] );
     } printf ("\n"); 
}
}