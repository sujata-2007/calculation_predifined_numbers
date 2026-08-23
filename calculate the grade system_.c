#include<stdio.h>
int main()
{
    int marks;
    
    printf("Enter your marks:");
    scanf("%d",&marks);
    
    if(marks>90 && marks<=100)
    {
        printf("your grade is O");
    }
    else if(marks>80 && marks<=90)
    {
        printf("your grade is A+" );
    }
    else if(marks>70 && marks<=80)
    {
        printf("your grade is A");
    }
    else if(marks>60 && marks<=70)
    {
        printf("your grade is B+" );
    }
    else if(marks>50 && marks<=60)
    {
        printf("your grade is B");
    }
    else if(marks>40 && marks<=50)
    {
        printf("your grade is c+");
    }
    else if(marks>30 && marks<=40)
    {
        printf("your grade is c");
    }
    else 
      {
          printf("you are fail");
      }  
      return 0;
}
