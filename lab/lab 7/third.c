#include<stdio.h>
int main (){int i;
	float a[8],s=0;
	
	for (i=0;i<8;i++){
		printf  (" enter the number %d",i);
		scanf ("%f",&a[i]);
	}
	
	for (i=0;i<8;i++){
	s=s+a[i];
		
	} 
	printf  (" sum of the number is %f and average is %f",s,s/8);
	return 0;
}
