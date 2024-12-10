#include <stdio.h>
#include <math.h> 
int main() {
    int number;
    double squareRoot;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Negative numbers cannot be perfect squares.\n");
    } else {
        squareRoot = sqrt(number);
        if (squareRoot == (int)squareRoot) {
            printf("The number %d is a perfect square.\n", number);
        } else {
            printf("The number %d is not a perfect square.\n", number);
        }
    }
    return 0;
}
