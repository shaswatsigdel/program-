
#include<stdio.h>
int isPrime(int, int);
int main()
{
    
    int num, prime;
    printf("Enter a positive number to check if Prime: ");
    scanf("%d", &num);
    prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is a Composite number", num);
    }
  
    return 0;
}