#include<stdio.h>
int celsiusToFarnehight(int C)
{
    int F =(C * 9/5) + 32;
    return F;
}
int main()
{
    int C = 10;
    int ans = celsiusToFarnehight(C);
    printf("%d",ans);
    return 0;
}