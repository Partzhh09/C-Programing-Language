#include <stdio.h>
int main() 
{
    int mark;
    printf("Enter your marks : ");
    scanf("%d",&mark);
    if (mark >= 90)
    {
        printf("Grade A");
    }
    else if (mark >= 80 && mark <90)
    {
        printf("Grade B");
    }
    else if (mark >= 70 && mark <80)
    {
        printf("Grade C");
    }
    else if (mark >= 60 && mark <70)
    {
        printf("Grade D");
    }
    else if (mark <= 50)
    {
        printf("you are fail");
    }
    return 0;
}