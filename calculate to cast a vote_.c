#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char c[20];
    printf("you are an indian citizen (yes/no):");
    scanf("%s",&c);
    
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18 && (strcmp(c,"yes")==0))
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible to vote");
    }
    return 0;
}
