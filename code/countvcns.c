#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{ char a[20];
int i,c=0,v=0,n=0,s=0,l;
printf ("enter the character ");
gets(a);
l=strlen(a);
for ( i = 0; i < l; i++)
{
    if (a[i]>='a'&& a[i]<='z')
    {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v=v+1;
        }
        else{
            c=c+1;
        }
    }
    else if (a[i]>='0'&& a[i]<='9')
    {
        n=n+1;
    }
    else{
        s=s+1;
    }
   
} 
printf ("%d vowel %d consonant %d number %d special ",v,c,n,s);
}

