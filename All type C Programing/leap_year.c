// year%400 == 0
// year%100 == 0
// year%4 == 0
#include <stdio.h>

int main()

{

    int year;

    scanf("%d", &year);

    if (year % 400 == 0)
    {

        printf("is a Leap Year\n");
    }

    else if (year % 100 == 0)
    {

        printf("Not a leap Year\n");
    }

    else if (year % 4 == 0)
    {

        printf("is a Leap Year\n");
    }
    else
    {

        printf("Not a leap Year\n");

        return 0;
    }
}