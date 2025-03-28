#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    if (a > 0)
    {
        printf("Your number is positive");
    }
    else if (a == 0)
    {
        printf("ZERO");
    }
    else
    {
        printf("Your number is nagative");
    }
    return 0;
}