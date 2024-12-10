#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char temp;
    int i, j, n;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--; 
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("The sorted string is: %s\n", str);
    return 0;
}
