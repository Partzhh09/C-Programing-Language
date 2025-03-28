// #include <stdio.h>
// #include <string.h>

// struct Employee {
//     char name[50];
//     int employeeID;
//     float salary;
// };

// int main() {
//     struct Employee emp1, emp2, emp3;

//     strcpy(emp1.name, "Alice");
//     emp1.employeeID = 1001;
//     emp1.salary = 50000.0;

//     strcpy(emp2.name, "Bob");
//     emp2.employeeID = 1002;
//     emp2.salary = 60000.0;

//     strcpy(emp3.name, "Charlie");
//     emp3.employeeID = 1003;
//     emp3.salary = 55000.0;

//     printf("\nEmployee 1:\n %s\n ID: %d\n Salary: $%.2f\n", emp1.name, emp1.employeeID, emp1.salary);
//     printf("\nEmployee 2:\n %s\n ID: %d\n Salary: $%.2f\n", emp2.name, emp2.employeeID, emp2.salary);
//     printf("\nEmployee 3:\n %s\n ID: %d\n Salary: $%.2f\n", emp3.name, emp3.employeeID, emp3.salary);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

void displayBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);
}

int main() {
    struct Book book1;

    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.price = 10.99;

    displayBook(book1);

    return 0;
}
