#include <stdio.h>
int main() {
    char str[100]; 
    int i, length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("Characters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);  // Print each character in reverse order
    }
    printf("\n");
    return 0;
}
