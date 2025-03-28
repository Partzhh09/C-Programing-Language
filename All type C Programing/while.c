#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter your value A :");
    scanf("%d",&a);
    n = 10;
    while (n >= 1)
    {
        printf("%d X %d = %d\n",a,n,a*n);
        --n;
    }
    return 0;
}