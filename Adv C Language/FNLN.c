#include<stdio.h>
#include<string.h>
void main()
{
    char first_name[20], last_name[20];
    printf("Enter your first name: ");
    gets(first_name);
    printf("Enter your last name: ");
    gets(last_name);
    strcat(first_name," ");
    strcat(first_name,last_name);
    printf("Your full name is: %s\n", first_name);
}