#include<stdio.h>
int main()
{
 int  da,hra,ta,salary,net,tax;
printf("Enter the salary:");
scanf("%d",&salary);

da =(salary*20)/100;
printf("da is:%d\n",da);

hra =(salary*40)/100;
printf("hra is:%d\n",hra);

ta =(salary*10)/100;
printf("ta is:%d\n",ta);

tax =((da+hra+ta+salary)*10/100);
net =(da+hra+ta+salary)-tax;

printf("Gross salary = %d\n",da+hra+ta+salary);
printf("your net salary is:%d\n",net);
return 0;
}
