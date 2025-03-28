#include <stdio.h>
int main()
{
    int arr[] = {52, 32, 45, 65, 41};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", arr[4 - i]);
    }
    return 0;
}