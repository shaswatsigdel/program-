#include<stdio.h>
int main (){int i;
	float a[10];
	
	for (i=0;i<10;i++){
		printf  (" enter the number %d",i);
		scanf ("%f",&a[i]);
	}
	
	for (i=0;i<10;i++){
		printf  ("  the number %d is %f",i,a[i]);
		
	}
	return 0;
}
