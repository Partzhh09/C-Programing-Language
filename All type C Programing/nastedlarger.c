#include <stdio.h>

int main() {
    int score;

    printf("Enter your numerical score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Error: Invalid score. Please enter a score between 0 and 100.\n");
    } else {
        switch (score / 10) {
            case 10:
            case 9:
                printf("Grade: A\n");
                break;
            case 8:
                printf("Grade: B\n");
                break;
            case 7:
                printf("Grade: C\n");
                break;
            case 6:
                printf("Grade: D\n");
                break;
            default:
                printf("Grade: F\n");
                break;
        }
    }

    return 0;
}
