#include <stdio.h>
#include <conio.h>
int main ()
{ int i;
 char a[15];
	 printf ("name and roll no ");
	 
	 scanf ("%[^\n]s",&a);
	 scanf ("%d",&i);
	 printf ("%s %d",a,i);

	return 0; 

	getch();
}

