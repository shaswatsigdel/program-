#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{ int a,b,c; 
float ci;

	 printf ("enter principal time rate");
	 
	 scanf ("%d %d %d",&a,&b,&c);
	 
	 ci=a*(pow((1+0.01*c),b)-1);
    printf("%f ",ci);
	return 0; 

	getch();
}

