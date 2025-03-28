#include <stdio.h>
void main()
{
    int size;
    printf("Enter the array of size :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the value of Array element : \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);
}

// #include <stdio.h>
// void main()
// {
//     int arr[5];
//     printf("Enter the value of Array element :");
//     scanf("%d",&arr);
//     int min = arr[5];
//     for (int i = 0; i <= 4; i++)
//     {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     printf("Minimum value in the array: %d\n", min);
// }

// #include <stdio.h>
// void main()
// {
//     int size;
//     printf("Enter the array of size :");
//     scanf("%d",&size);

//     int arr[size];
//     printf("Enter the value of Array element : \n");

//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int min = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
    
//     printf("Minimum value in the array: %d\n", min);
// }