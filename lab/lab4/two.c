#include<stdio.h>
int main()
{
  int a, rev=0, rem;
  
  printf("Enter any integer: ");
  scanf("%d", &a);
  
  
  do
  {
    rem=a%10;
    rev=rev+rem;
    a=a/10;
    
  }while(a>0);

  printf("The sum  order of digit  is %d", rev );

  return 0;
}
