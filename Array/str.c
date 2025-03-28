// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     // char str[]={'P','A','R','T','H','\0'};
//     char str[6];
//     gets(str);
//     puts(str);
//     printf("STRING LEN : %d",strlen(str));
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    // char str[]={'P','A','R','T','H','\0'};
    char fname[6];
    char lname[10];
    gets(fname);
    gets(lname);
    for (int i = 0; i < strlen(fname); i++)
    {
        printf("%c",fname[i]);
    }
    for (int i = 0; i < strlen(lname); i++)
    {
        printf("%c",lname[i]);
    }
    return 0;
}