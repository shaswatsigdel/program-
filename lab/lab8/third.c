#include <stdio.h>
int main (){
	int a,b,c ;
	int *p,*q,*r;
	
	printf (" enter the2 number");
	scanf ("%d%d",&a,&b);
	
	
	p=&a;
	q=&b;

r=p;
p=q;
q=r;
	printf ("2 number after swap  is %d %d",*p,*q);
	return 0;
}
