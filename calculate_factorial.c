#include<stdio.h>
int main()
{
    int i,fact,n;
   printf("enter the number:");
   scanf("%d",&n);
   fact =1;
   for(i=1; i<=n; i++)
   {
       fact=fact*i;
   }
   printf("factorial is %d",fact);
   return 0;
}
