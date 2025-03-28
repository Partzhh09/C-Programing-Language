#include<stdio.h>

void Facto(int number);

void main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    Facto(num);
}

void Facto(int number) {
    int ans = 1;
    while (number > 1) {
        ans = number * ans;
        number--;
    }
    // int ans = 1;
    // for (int i = number; i > 1; i--) {
    //     ans *= i;
    // }
    printf("Factorial: %d\n", ans);
}