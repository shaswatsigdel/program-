#include <stdio.h>
#include <conio.h>

int main ()
{
	char x=6,y=3; // 
	printf ("enter");
	printf ("%s %7s %18s %16s \n",'x','y','expression','result');
		printf ("enter");
	return 0;


	#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline

    printf("\nChecking using ASCII codes:\n");

    if (ch >= '0' && ch <= '9') {
        printf("It's a number (ASCII: %d)\n", ch);
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("It's an alphabet (ASCII: %d)\n", ch);
    } else {
        printf("It's a special character (ASCII: %d)\n", ch);
    }

    printf("\nChecking using character functions:\n");

    if (isalnum(ch)) {
        printf("isalnum(): It's alphanumeric\n");
    } else {
        printf("isalnum(): It's NOT alphanumeric\n");
    }

    if (isblank(ch)) {
        printf("isblank(): It's a blank character (space or horizontal tab)\n");
    } else {
        printf("isblank(): It's NOT a blank character\n");
    }

    if (isalpha(ch)) {
        printf("isalpha(): It's an alphabetic character\n");
    } else {
        printf("isalpha(): It's NOT an alphabetic character\n");
    }

    if (iscntrl(ch)) {
        printf("iscntrl(): It's a control character\n");
    } else {
        printf("iscntrl(): It's NOT a control character\n");
    }

    if (isdigit(ch)) {
        printf("isdigit(): It's a digit\n");
    } else {
        printf("isdigit(): It's NOT a digit\n");
    }

    if (isupper(ch)) {
        printf("isupper(): It's an uppercase character\n");
    } else {
        printf("isupper(): It's NOT an uppercase character\n");
    }

    if (islower(ch)) {
        printf("islower(): It's a lowercase character\n");
    } else {
        printf("islower(): It's NOT a lowercase character\n");
    }

    if (isxdigit(ch)) {
        printf("isxdigit(): It's a hexadecimal digit\n");
    } else {
        printf("isxdigit(): It's NOT a hexadecimal digit\n");
    }
    
    if (isgraph(ch)) {
        printf("isgraph(): It's a graphical character (printable, not space)\n");
    } else {
        printf("isgraph(): It's NOT a graphical character\n");
    }

        if (isprint(ch)) {
        printf("isprint(): It's a printable character (including space).\n");
    } else {
        printf("isprint(): It's NOT a printable character.\n");
    }

    return 0;
}
}
