#include <stdio.h>
#include <conio.h>


int main () {
	float a,b,s;
	char c;
printf ("enter the symbols");
scanf (" %c",&c);	
printf ("enter the number ");
scanf (" %f %f",&a,&b);	

if (c=='+')
printf ("%f \n",a + b);

else if (c=='-')
printf ("%f \n",a - b);

else if (c=='*')
printf ("%f \n",a * b);
else if (c=='/')
printf ("%f \n",a / b);

else 

printf ("invalid input");



return 0;
}
