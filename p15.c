// to display a pattern like a right angle triangle using numbers
// the pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<stdio.h>
int main()
{
    int i=0,j=0,n=0,count=1;
    printf("enter number of elements\n");
    scanf("%d",&n);
    for(i=1;count<=n;i++)
    {
        for(j=1;j<=i;j++){
            if(count>n){
                break;
            }
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}