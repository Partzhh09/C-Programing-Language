#include<stdio.h>
int main()
{
    int i;
    printf("Enter Your Number :");
    scanf("%d",&i);
    int sum=0;
    while (i<=10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum OF Natural Number is : %d",sum);
        
    return 0;   
}