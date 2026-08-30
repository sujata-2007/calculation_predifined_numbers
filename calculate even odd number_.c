#include<stdio.h>
int main()
{
    int i,a,b;
    
    printf("enter the lawer range:");
    scanf("%d",&a);
    
    printf("enter the higher range:");
    scanf("%d",&b);
    
    if(a%2==0)
    {
        for(i=a; i<=b; i=i+2)
        {
            printf("%d\t",i);
        }
    }
    else if(a%2!=0)
    {
        for(i=a+1; i<=b; i=i+2)
        {
            printf("%d\t",i);
        }
    }
    else
    printf("invalid output");
    if(a%2!=0)
    {
        for(i=a; i<=b; i=i+2)
        {
            printf("%d\t",i);
        }
    }
    else if(a%2==0)
    {
        for(i=a+1; i<=b; i=i+2)
        {
            printf("%d\t",i);
        }
    }
    else 
    printf("invalid input");
    
    return 0;
}
