#include <stdio.h>
int main (){int i=0,s=1,v=0;
	char a[100];
	printf (" enter the string");
	scanf ("%[^\n]s",&a);
	
	
	while (a[i]!= '\0'){
	
		if (a[i]=='.'){
			a[i]=':';
		}
		if (a[i]==' '){
			a[i]=a[i+1];
		}
		i=i+1;
}
		printf (" %s",a);
}
