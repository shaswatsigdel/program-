#include<stdio.h>
#include<conio.h>
int main() { 
    int g=0,s=999999,t,i,n,sum;
    int rev,r;
    for (i=0;i<4;i++){
        n=0;
        t=0;
        scanf("%d",&n);
        if(n%2==0){
            t=n;
            if (g<t)
            g=t;
            if (s>t)
            s=t;
        }
    }
    printf("g=%d s=%d",g,s);
    sum=g+s;
    while (sum!=0){
        r=sum%10;
        rev=rev*10+r;
        sum=sum%10;
    }
    printf("%d",rev);
    return 0;
}