// #include<stdio.h>
// void main()
// {
//     int i,j,Num;
//     printf("Enter the Number of Pattern :");
//     scanf("%d",&Num);
//     for (i = 1; i <= Num ; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int i,j;
//     char Alpha = 'A';
//     for (i = 1; i <= 4 ; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ",Alpha);
//             Alpha++;
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

void main()
{
    int i, j, Num;
    printf("Enter the Number of Pattern: ");
    scanf("%d", &Num);

    for (i = Num; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}