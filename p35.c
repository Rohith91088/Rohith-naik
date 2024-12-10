#include <stdio.h>
#include <ctype.h> 
int main() {
    char input[100]; 
    int i = 0, is_digit = 1, is_number = 1;
    printf("Enter an input: ");
    fgets(input, sizeof(input), stdin); 
    while (input[i] != '\0' && input[i] != '\n') {
        if (!isdigit(input[i]) && (i != 0 || input[i] != '-')) { 
            is_number = 0;
        }
        i++;
    }
    if (is_number == 1 && i == 2 && input[0] == '-' && isdigit(input[1])) {
        printf("The input is a number.\n");
    } else if (is_number == 1) {
        printf("The input is a number.\n");
    } else if (isdigit(input[0]) && i == 1) {
        printf("The input is a digit.\n");
    } else {
        printf("The input is neither a valid digit nor a number.\n");
    }
    return 0;
}
