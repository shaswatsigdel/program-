#include<stdio.h>

void main()
{
   int side, aos, per;

   printf("\nEnter the Length of Side : ");
   scanf("%d", &side);

   aos = side * side;
   per = 4*side;
   printf("Area of Square : %d", aos);
   printf("Perimeter of Square : %d", per);

}