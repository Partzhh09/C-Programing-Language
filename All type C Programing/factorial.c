#include <stdio.h>
int main()
{
    int n;
    int multi = 1;
    printf("Enter your value = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        multi = multi * i;
    }
    printf("Factorial of %d = %d ", n, multi);
    return 0;
}