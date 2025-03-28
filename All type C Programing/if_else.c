#include<stdio.h>
int main()
{
    
    int a;
    printf("Enter your Age :");
    scanf("%d",&a);
    if (a >= 18)
    {
        printf("You are aligiebal for vote");
    }
    else
    {
        printf("You are not aligiebal for vote");
    }
    return 0;
}