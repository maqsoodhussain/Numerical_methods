#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    float x[MAX],fx[MAX],xp,fxp,lf,sum;
    int i,j,n;
    printf("\n--------LAGRANGE INTERPOLATION METHOD\n");
    printf("\nEnter Number of Points:\t");
    scanf("%d",&n);

    printf("\nEnter x matrix:\n");
    for(i=1;i<=n;i++){
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);
    }
    printf("\nEnter f(x) matrix:\n");
    for(i=1;i<=n;i++){
        printf("f(x[%d]) = ",i);
        scanf("%f",&fx[i]);
    }
    printf("\nEnter x Point for calculation:\t");
    scanf("%f",&xp);

    sum=0.0;
    for(i=1;i<=n;i++){
        lf = 1.0;
        for(j=1;j<=n;j++){
            if(i!=j){
                lf = lf* (xp -  x[j])/(x[i]-x[j]);
            }
        }
        sum = sum + lf*fx[i];
    }

    fxp = sum;
    printf("\nInterpolated value of f(%f) = %f",xp,fxp);
    return 0;
}
