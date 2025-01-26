#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, i, d,r;
	float root1, root2;
	printf("Enter the values of a, b, c in equation ax^2+bx+c=0.\n");
	scanf("%f%f%f", &a, &b, &c);
	d=pow(b,2)-4*a*c;
	
	if(d>=0)
	{
		root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
		 
		 	printf("root1 %.2f", root1);
		printf("root2 %.2f", root2);
	}
	else
 { i =sqrt(d *-1)/(2*a);
	 r= -b/2*a;
		
		 	printf("root1: %.2f%.2fi", r, i);
		printf("root2: %.2f%.2fi", r, -i);
		 }
		 
		 
		 
		 return 0;
	}