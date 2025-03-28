#include<stdio.h>
void Checkeven(int n)
{
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    Checkeven(5);
    return 0;
}