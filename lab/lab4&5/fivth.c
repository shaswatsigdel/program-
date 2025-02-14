#include<stdio.h>
int main()
{
  int a;
  printf("number ");
  scanf("%d", &a);

  if(a%5==0 &&(a%7==0 && a%11!=0))
  {
  	printf (" this given number is multiple of 5 , divisible by 7 but not eleve");
  }
    else 
    printf (" the givern numbre is not multiple of 5 , divisible by 7 but not eleve");
     return 0;
 }