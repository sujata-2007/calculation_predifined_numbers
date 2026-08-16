#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,t,A,CI;
    int  n;
    printf("enter the value of P:");
    scanf("%f",&P);

    printf("enter the value of R:");
    scanf("%f",&R);

    printf("enter the value of t:");
    scanf("%f",&t);

    printf("enter the value of N:");
    scanf("%d",&n);
   
   A =P*pow((1+R/(100.0*n)),n*t); 
    CI = A-P;
    printf("total amount:%.2f\n",A);
    printf("calculate the value of CI:%.2f\n",CI);
    return 0;
    }
