#include<stdio.h>
int main()
{
    int SI,P,R,T;
    printf(" Price : ");
    scanf("%d",P);
    printf(" Rate : ");
    scanf("%d",R);
    printf(" Time : ");
    scanf("%d",T);
    SI = (P * R * T)/100;
    printf("Your SI is : %d",SI);
    return 0;
}