#include<stdio.h>
#include<math.h>
int main()
{
float area,radius;
printf("Enter the value of radius:");
scanf("%f",&radius);
area = M_PI*pow(radius,2);
printf("area of circle is:%.2f",area);
return 0;
}
