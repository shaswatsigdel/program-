#include <stdio.h>
#include <conio.h>
void main ()
{
     char a;
     FILE *f=fopen ("put.txt","w");
     fputc('a',f);
     printf ("data added");
     fclose(f);
     getch ();
     }
