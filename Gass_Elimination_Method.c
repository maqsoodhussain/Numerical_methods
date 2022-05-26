#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    float a[10][10],x[10],sum,factor;

    printf("\n----------Gauss Elimination Method");
    printf("\nEnter Number of Coeficients (<9):");
    scanf("%d",&n);
    printf("\n----------Enter Augumented Matrix A[x:b]");
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1;j++){
            printf("a[%d][%d]  ",i,j);
            scanf("%f",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n----------Forward Elimination in progress.....");
    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){
            if(j>i){
                factor = a[j][i]/a[i][i];
                for(k=1;k<=n+1;k++){
                    a[j][k] = a[j][k] - (factor * a[i][k]);
                }
            }
        }
    }

    printf("\n----------The Upper Trianagular Matrix A[x:b] is");
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1;j++){
            printf("a[%d][%d] = %f  ",i,j,a[i][j]);
        }
        printf("\n");
    }
    printf("\n----------The Backward Substitution in progress...");
    x[n] = a[n][n+1]/a[n][n];
    for(i=n-1;i>=1;i--){
        sum =0;
        for(k=i+1;k<=n;k++){
            sum = sum + a[i][k]*x[k];
        }
        x[i] = (a[i][n+1] - sum)/a[i][i];
    }
    printf("\n----------The solution of the Matrix is:");
    for(i=1;i<=n;i++){
        printf("\nValue of x%d is %f",i,x[i]);
    }
    return 0;
}
