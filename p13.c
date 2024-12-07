// to display a pattern like a right angle triangle using an asterisk
// the pattern:
// *
// **
// ***
// ****

#include<stdio.h>
int main()
{
    int i=0,j=0,n=0;
    printf("enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}