#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Number :");
    scanf("%d",&n);
    int sum=0,i=1;
    do
    {
        sum+= (n * i);
        printf("%d\n",i*n);
        i++;
    } while (i<=10);
    printf("Sum OF Natural Number is : %d",sum);
        
    return 0;
}