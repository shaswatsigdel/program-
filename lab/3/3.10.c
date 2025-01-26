#include <stdio.h>
#include <conio.h>

int main() {
char c;
printf ("enter the character ");
scanf ("%c",&c);
if (isalnum(c)==1){
	printf ("%c is alphanumeric ",c);
	
	
}
else if (isblank(c)==1){
	printf ("%c is blank character ",c);
	
}
else if (isupper(c)==1){
	printf ("%c is upper character ",c);
	
}
else if (islower(c)==1){
	printf ("%c is upper character ",c);
	
}
else if (isdigit(c)==1){
	printf ("%c is digit character ",c);
	
}
else 
printf (" invalid input");

return 0;
}

