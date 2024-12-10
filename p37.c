#include <stdio.h>
int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    if (month >= 1 && month <= 12) {
        printf("The month number %d is valid.\n", month);
    } else {
        printf("The month number %d is invalid.\n", month);
    }
    return 0;
}
