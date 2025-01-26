#include<stdio.h>
int main (){int i,j,temp;
	int a[8],s=0;
	
	for (i=0;i<5;i++){
		printf  (" enter the number %d",i);
		scanf ("%d",&a[i]);
	}
	
	for (i=0;i<5;i++){
			for (j=i+1;j<5;j++){
				if (a[i]>a[j])
				{
					temp =a[i];
					a[i]=a[j];
					a[j]=temp;
					
					
				}}}
			for (i=0;i<5;i++){
					printf  (" for ascending ");
		printf  ("  the number %d \n",a[i]);
	
	}
	for (i=4;i>=0;i--){
					printf  (" for desending  ");
		printf  ("  the number %d \n",a[i]);
	
	}
	return 0;
	}
	
