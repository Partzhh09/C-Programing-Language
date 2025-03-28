#include<stdio.h>
#include<math.h>
int main()
{
    int A=0,P,R,N,nt;
    printf("P :");
    scanf("%d",&P);
    printf("R :");
    scanf("%d",&R);
    printf("N :");
    scanf("%d",&N);
    printf("nt :");
    scanf("%d",&nt);
    A= pow(P *(1 + R / N), nt);
    printf("%d",A);
    return 0;
}