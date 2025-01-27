#include <stdio.h>
#include <conio.h>
void main ()
{
     char a;
     FILE *f=fopen ("printf.txt","r");
     
     while (a!=EOF){
     a=fgetc(f);
     
     printf ("%c",a);
     }
     fclose (f);
     getch ();
     }
