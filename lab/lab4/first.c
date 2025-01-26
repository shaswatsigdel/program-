#include<stdio.h>
int main()
{
  float p, c, b, m, e, total, per;

  printf("Enter your marks obtained in following subjects:");
  printf("physics:\n ");
  scanf("%f", &p);

  printf("chemistry:\n ");
  scanf("%f", &c);

  printf("biology:\n ");
  scanf("%f", &b);

  printf("math: \n");
  scanf("%f", &m);

  printf("english: \n");
  scanf("%f", &e);
  
  total= p+m+c+e+b;
  per=total/5;

printf (" physics %f chemitry  %f bio %f  mths  %f english  %f  ",p,c,b,m,e);
if(per<40)
  {
    printf("Rank fail \n");
    printf("division no division\n");
  }
  else if(per>=40 && per<55)
  {
        printf("rank pass \n");
    printf("division third  division\n");
  }
   else if(per>=55 && per<65)
 {
        printf("rank pass \n");
    printf("division second  division\n");
  }
  else if(per>=65 && per<80)
  {
    {
        printf("ank pass \n");
    printf("division first  division\n");
  }
  }
  else if(per>=80 && per<95)
 {
        printf("rank pass \n");
    printf("division distinction\n");
  }
  else if(per>=95 && per<=100)
  {
        printf("rank pass \n");
    printf("division exxtra ordinary\n");
  }

  return 0;

}