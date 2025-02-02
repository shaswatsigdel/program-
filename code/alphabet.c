#include<stdio.h>
#include <conio.h>
void main()
{ char a;

printf ("enter any character");
scanf ("%c",&a);
if (a>='a'&& a<='z')
{
   printf ("alphabets");
}
 else if (a >= '0' && a <= '9')
{
   
   printf ("anumber");
}
else{
    printf ("symbols");
}
}