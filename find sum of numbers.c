#include<stdio.h>
int main()
{
    int i, num1, num2, sum=0;
    printf("enter rhe number:");
    scanf("%d",&num1);
    printf("enter the number:");
    scanf("%d",&num2);
    for(i=num1; i<=num2; i++)
    {
        sum = sum+i;
        printf("%d\n", sum);
    }
    printf("%d",sum);
    return 0;
}
