#include<stdio.h>
int main (){int i;
	float a[10],large,small;
	
	for (i=0;i<10;i++){
		printf  (" enter the number %d",i);
		scanf ("%f",&a[i]);
	}
	large=a[0];
	small=a[0];
	for (i=0;i<10;i++){
		if (a[i]>large )
		large = a[i];
		
		
			if (a[i]<small )
		small = a[i];
	}
	
	printf (" the largest number is %f and smallest is %f",large,small);
	return 0;
}
