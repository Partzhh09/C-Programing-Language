#include <stdio.h>
#include <string.h>
struct Student
{
    int RollNum;
    char Name[100];
    int long long contactDetails;
    char Address[100];
};
int main()
{
    struct Student s1;
    s1.RollNum = 1004;
    strcpy(s1.Name, "Parth");
    s1.contactDetails = 6453083177;
    strcpy(s1.Address, "Ghar ma");

    printf("%d\n", s1.RollNum);
    printf("%s\n", s1.Name);
    printf("%lld\n", s1.contactDetails);
    printf("%s\n \n", s1.Address);
    return 0;
}