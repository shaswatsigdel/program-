#include<stdio.h>
int main (){int i,j,k,temp;
	int a[3][3],b[3][3],c[3][3],s=0;
	
	
	printf (" enter the first matrxix");
	for (i=0;i<3;i++){
			for (j=0;j<3;j++){
				scanf (" %d",&a[i][j]);
			}}
			printf (" enter the second matrxix");
				for (i=0;i<3;i++){
			for (j=0;j<3;j++){
				scanf (" %d",&b[i][j]);
			}}
			
				for (i=0;i<3;i++){
			for (j=0;j<3;j++){s=0;
				for (k=0;k<3;k++){
			s=s+a[i][k]*b[k][j];
			}
		
		c[i][j]=s;
		}
	}
		for (i=0;i<3;i++){
			for (j=0;j<3;j++){
				printf (" %d",c[i][j]);
			}
			printf ("\n");}
			return 0;
		}
