// #include <stdio.h>
// int linearSearch(int arr[], int n, int target)
// {
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[5] = {10, 7, 6, 3, -10};
//     int target = 3;
//     int index = linearSearch(arr, 5, target);
//     printf("%d", index);
//     return 0;
// }

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
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Minimum value in the array: %d\n", min);
}