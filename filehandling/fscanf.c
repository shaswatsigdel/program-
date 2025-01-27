#include <stdio.h>
#include <conio.h>
void main ()
{
     char a[20],b[20];
     int i,c,d;
     FILE *f=fopen ("printf.txt","r");
     
     while (fscanf (f,"%s %s %d %d",&a,&b,&c,&d)!=EOF)
     {
         printf ("%s %s %d %d",a,b,c,d);
         }
         fclose(f);
         getch();
          
          
}
