#include<stdio.h>
int main(){
    int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
    printf("Enter two 2x2 matrix:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d %d", &a[i][j],&b[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;k<2;j++){
            sum=0;
            for(k=0;k<2;k++){
                sum=sum+a[i][j]*b[i][j];

            }
            c[i][j]=sum;

        }
        printf("\n");

    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",c[i][j]);

        }
        printf("\n");
    }
}