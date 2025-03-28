#include<stdio.h>
int main()
{
    
    char ch;
    printf("Enter your Character :");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u'
    || ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U' )
    {
        printf("your character is vowel");
    }
    else
    {
        printf("Your character is consonent");
    }
    return 0;
}