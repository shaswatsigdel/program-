#include <stdio.h>
#include <conio.h>
void main ()
{
     char a[20],b[20];
     int i,c,d;
     FILE *f=fopen ("printf.txt","a");

     top :
              printf ("enter the number ");
         scanf ("%s %s %d %d",&a,&b,&c, &d);
         fprintf(f,"%s %s %d %d",a,b,c,d);
        
         printf ("if want to add more type 1");
     scanf ("%d",&i);
     
     if (i==1)
    { goto top ;}
      printf ("value added");
         fclose(f);
         getch();
          
          
}

