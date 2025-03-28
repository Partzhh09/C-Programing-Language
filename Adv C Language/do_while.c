// #include<stdio.h>
// int main()
// {
//     int i = 1,gap;
//     do
//     {
//         printf("%d\n");
//         gap 3*2;
//         gap++;
//     } while (i<=gap);
//     printf("%d",gap);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n = 3;
    int sum=0,gap;
    do
    {
        sum += (n * gap);
        printf("%d\n",gap*n);
        gap++;
    } while (gap<=150);
    printf("%d",sum++);
        
    return 0;
}