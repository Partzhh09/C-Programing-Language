#include <stdio.h>

struct Department
{
  char DepartmentName[30];
  int DepartmentID;
};

struct Student
{
  char Name[30];
  int EnrollmentNumber;
  char Stream[20];
  struct Department D1;
};

int main()
{
  int N;
  printf("\n\nENTER THE NUMBER OF STUDENTS: ");
  scanf("%d", &N);

  struct Student S[N];  // Declare an array of Students of size N

  for (int i = 0; i < N; i++)
  {
    printf("\n\nEnter the details of student %d:\n\n", (i + 1));
    
    printf("Enter the name of the student: ");
    scanf(" %s", S[i].Name);  // Use S[i] instead of S and S->

    printf("Enrollment number: ");
    scanf("%d", &S[i].EnrollmentNumber);  // Use S[i]

    printf("Stream: ");
    scanf(" %s", S[i].Stream);  // Use S[i]

    printf("Name of department: ");
    scanf(" %s", S[i].D1.DepartmentName);  // Use S[i].D1

    printf("Department ID: ");
    scanf("%d", &S[i].D1.DepartmentID);  // Use S[i].D1
  }

  for (int j = 0; j < N; j++)
  {
    printf("\n\nDETAILS OF STUDENT %d:\n\n", (j + 1));
    printf(" --> Name: %s\n", S[j].Name);
    printf(" --> Enrollment number: %d\n", S[j].EnrollmentNumber);
    printf(" --> Stream name: %s\n", S[j].Stream);
    printf(" --> Department name: %s\n", S[j].D1.DepartmentName);
    printf(" --> Department ID: %d\n", S[j].D1.DepartmentID);
  }

  return 0;
}

// Output:
// ENTER THE NUMBER OF STUDENTS: 2