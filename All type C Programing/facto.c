#include <stdio.h>
int main() 
{
    int n, i;
    int long long muti = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) 
    {
        muti *= i;
    }
    printf("Factorial of %d = %llu", n, muti);
    return 0;
}
