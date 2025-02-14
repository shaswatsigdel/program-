#include <stdio.h>
int main (){int i=0,s=1,v=0,j=0;
	char a[100],b[100],c[100];
	printf (" enter the first  string");
	scanf ("%s",&a);
		printf (" enter the second  string");
	scanf ("%s",&b);
	
while (a[i]!= '\0'){
	c[i]=a[i];
	i=i+1;
}

while (b[j]!= '\0'){
	c[i]=b[j];
	j=j+1;
	i=i+1;
	}

printf (" the concatenate string is %s",c);
return 0;
}
