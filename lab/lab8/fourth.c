#include <stdio.h>
#include <string.h>

int main (){int i=0,s=1,v=0;
	char a[100],b[100];
	printf (" enter the string");
	scanf ("%[^\n]s",a);
	
	
	

v=strlen(a);

s=0;
for (i=v-1;a[i]!=0;i--){
	b[s]=a[i];
	s=s+1;
}
 for (i=0;i<v-1;i++)
{

	if  (a[i]!=b[i]){
	
printf ("not palindrome");
goto p;
}
}
printf (" palindromw");
p: ;
}

