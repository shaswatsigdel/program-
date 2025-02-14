#include<stdio.h>
int main()
{
  int a,b;
  printf (" enter two number");
  scanf (" %d %d", &a,&b);
  
  if (a%2 ==0 && b%2==0)
  printf (" the sum is %d",a+b);
  
  else 
  printf ("the number is not even ");



return 0;
}