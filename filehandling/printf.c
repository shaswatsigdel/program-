#include <stdio.h>
#include <conio.h>
void main ()
{
     char a[20],b[20];
     int i,c,d;
     FILE *f=fopen ("printf.txt","w");
     for (i=1;i<=5;i++)
     {
         printf ("enter the number ");
         scanf ("%s %s %d %d",&a,&b,&c, &d);
         fprintf(f,"%s %s %d %d",a,b,c,d);}
         printf ("value added");
         fclose(f);
         getch();
          
          
}
