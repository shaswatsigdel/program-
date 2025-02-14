#include<stdio.h>
int main()
{
  int a, rev=0, rem;
  
  printf("Enter any integer: ");
  scanf("%d", &a);


  while(a>0)
  {
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
    
  }

  printf("The reverse order of digit  is %d", rev );

  return 0;
}
