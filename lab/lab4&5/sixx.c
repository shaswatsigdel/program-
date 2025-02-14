#include<stdio.h>
int main()
{
  int a=1,b=1,s,i;
  
 
  
   while (s<=500)
   {
   	printf (" %d \t",a);
   	s=a+b;
   	a=b;
   	b=s;
   	
 
   }
   
   
   return 0;
}