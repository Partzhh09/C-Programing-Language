//function in sum and call by value

// #include <stdio.h>
// void Sum(int a, int b); 
// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     Sum(num1, num2);
//     return 0;
// }
// void Sum(int a, int b) { 
//     int result = a + b;
//     printf("Sum: %d\n", result);
// }

//fromal parameter and actual parameter with example
//formal parameter: a, b
//actual parameter: num1, num2

//without return type and without argument function

#include <stdio.h>
void Sum(); 
int main() {
    Sum(); 
    return 0;
}
void Sum() { 
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);
}

//with return type and without argument function

//without return type and with argument function

//with return type and with argument function

