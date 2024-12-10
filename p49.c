#include <stdio.h>
#include <string.h>
int main() {
    char str[100], substr[100];
    int start, length, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int str_len = strlen(str);
    if (str[str_len - 1] == '\n') {
        str[str_len - 1] = '\0';
    }
    printf("Enter the starting position (0-based index): ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        substr[i] = str[start + i];
    }
    substr[i] = '\0'; 
    printf("The extracted substring is: %s\n", substr);
    return 0;
}
