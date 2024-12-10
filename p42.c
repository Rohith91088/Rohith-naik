#include <stdio.h>
int main() {
    int sum = 0, i;
    float average;
    for(i = 1; i <= 10; i++) {
        sum += i;
    }
    average = sum / 10.0;
    printf("Sum of the first 10 natural numbers: %d\n", sum);
    printf("Average of the first 10 natural numbers: %.2f\n", average);
    return 0;
}
