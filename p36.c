#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is NOT a multiple of both 3 and 5.\n");
    }
    return 0;
}
