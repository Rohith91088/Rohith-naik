//to print sum and average of first 10 natural numbers

#include<stdio.h>
int main()
{
    float i=0,sum=0,average=0;
    for(i=1;i<=10;i++)
    {
        sum+=i;
    }
    average=sum/10;
    printf("the sum of the first 10 natural numbers is %f\n",sum);
    printf("the average of the first 10 natural numbers is %f\n",average);
    return 0;

}