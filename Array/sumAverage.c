#include <stdio.h>
int main()
{
    int arr[5], sum = 0, avg = 0;
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 5;
    printf("Sum of arr: %d\n Average of arr: %d", sum, avg);
    return 0;
}