#include <stdio.h>
int swap (int *p,int *q)
{int *r;
r=p;
p=q;
q=r;
	printf ("2 number after swap  is %d %d",*p,*q);
	
}
int main (){
	int a,b,c ;
	int *p,*q,*r;
	
	printf (" enter the2 number");
	scanf ("%d%d",&a,&b);
	
	swap (&a,&b);
 return 0;	
}
	
