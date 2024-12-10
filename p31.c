#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, result = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  // Read the first string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = str1[i] - str2[i]; 
            break;
        }
        i++;
    }
    if (result == 0 && (str1[i] != '\0' || str2[i] != '\0')) {
        result = str1[i] - str2[i];  
    }
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is smaller than the second string.\n");
    }
    return 0;
}
