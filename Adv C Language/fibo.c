#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, c, i;
    
    if (n == 1) {
        printf("%d ", a);
        return;
    }
    
    printf("%d %d ", a, b);
    
    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    if (n > 0) {
        printFibonacci(n);
    } else {
        printf("Please enter a positive integer.");
    }
    
    return 0;
}
