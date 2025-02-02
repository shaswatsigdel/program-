#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{ 
  char a[20];
  int i,j,ap=0,n=0,v=0,s;
  printf ("enter the statement");
  gets(a);
  s=strlen(a);
  for ( i = 0; i < s; i++)
  {
   if (a[i]>= 'a' && a[i]<= 'z')
   {
   ap=ap+1;
   }
    else if (a[i]>= '1' && a[i]<='9')
  {
    n=n+1;
  } 
  else
  {
    v=v+1;
  }}
  printf ("aplha %d",ap);
   printf ("num %d",n);
    printf ("symbol %d",v);
}
