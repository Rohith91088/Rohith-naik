//to check if a character is a vowel or consonant

#include<stdio.h>
int main()
{
    char ch=0;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("'%c' the entered character is a vowel\n",ch);

    }
    else{
        printf("'%c' the entered character is a consonant\n",ch);
    }
    return 0;
}