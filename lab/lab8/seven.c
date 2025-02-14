#include <stdio.h>
int main (){int i=0,s=1,v=0;
	char a[100],b[100];
	printf (" enter the string");
	scanf ("%s",&a);
	
while (a[i]!= '\0'){
	b[i]=a[i];
	i=i+1;
}
printf (" the copied string is %s",b);
return 0;
}
