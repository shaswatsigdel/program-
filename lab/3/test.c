#include <stdio.h>
#include <ctype.h>


int main() {
char c;
printf ("enter the character ");
scanf ("%c",&c);
if (isalnum(c)){
	printf ("%c is alphanumeric ",c);
	
	
}
else if (isblank(c)){
	printf ("%c is blank character ",c);
	
}
else if (isupper(c)){
	printf ("%c is upper character ",c);
	
}
else if (islower(c)){
	printf ("%c is upper character ",c);
	
}
else if (isdigit(c)){
	printf ("%c is digit character ",c);
	
}
else 
printf (" invalid input");

return 0;
}

