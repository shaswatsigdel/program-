#include<stdio.h>
int main()
{
  int n1, n2, n3;
  printf("enter three numbers");
  printf("number1: ");
  scanf("%d", &n1);

  printf("number2: ");
  scanf("%d", &n2);

  printf("number3: ");
  scanf("%d", &n3);

  if(n1>n2 && n1>n3)
  {
    printf("%d is the largest number", n1);
    if(n1%2==0)
    {
      printf("%d is an even number", n2);
    }
    else
    {
      printf("%d is an odd number", n1);
    }
  }
  else if(n2>n1 && n2>n3)
  {
    printf("%d is the largest number", n2);
    if(n2%2==0)
    {
      printf("%d is an even number", n2);
    }
    else
    {
      printf("%d is an odd number", n2);
    }
  }
  else
  {

    printf("%d is the largest number", n3);
    if(n3%2==0)
    {
      printf("%d is an even number", n3);
    }
    else
    {
      printf("%d is an odd number", n3);
    }
  }

  return 0;

}