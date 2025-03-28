#include <stdio.h>
int main()
{
    int arr[5], sum = 0, average = 0;
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / 5;
    printf("sum of arr: %d\n average of the arr: %d", sum, average);
    return 0;
}