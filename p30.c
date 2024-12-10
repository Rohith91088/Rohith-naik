#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100]; 
    int count = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') {
        if ((i == 0 || str[i - 1] == ' ') && !isspace(str[i])) {
            count++;  // Increment the word count
        }
        i++;
    }
    printf("Total number of words: %d\n", count);
    return 0;
}
