#include<stdio.h>
int main()
{
int p,r,t;
float SI;
printf("Enter the principle:");
scanf("%d",&p);
printf("Enter the rate of interest:");
scanf("%d",&r);
printf("Enter the time:");
scanf("%d",&t);
SI = (p*r*t)/100;
printf("calculate the simple intereset %d; %.2f" ,p, SI);
return 0;
}
