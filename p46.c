#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, specialChars = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] != ' ' && str[i] != '\n') {
            specialChars++;
        }
    }
    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specialChars);
    return 0;
}
