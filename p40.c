#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; 
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character '%c' is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) { 
        printf("The character '%c' is a consonant.\n", ch);
    } else {
        printf("The entered character is not a letter.\n");
    }
    return 0;
}
