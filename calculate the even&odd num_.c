#include<stdio.h>
int main()
{
int num;

    printf("enter the num:");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("This is even num:%d", num);
    }
    else
    {
        printf("This is odd num:%d", num);
    }
    return 0;
}
