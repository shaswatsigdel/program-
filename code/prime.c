#include<stdio.h>
#include <conio.h>
void main()
{ int a,c=0,i;
printf ("enter the number");
scanf ("%d",&a);
for ( i = 1; i <=a; i++)
{
    if (a%i==0)
    {
        c=c+1;
    }
}
if (c==2)
{
    printf ("prime ");

}
else{
    printf ("composite");

}

}