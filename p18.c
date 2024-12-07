//calculator using switch function

#include<stdio.h>
#include<math.h>
int main()
{
    char op;
    double first,second;
    printf("enter an operator(+ , - , * , / , %%)\n");        //'%%' means remainder
    scanf(" %c",&op);
    printf("Enter first number\n");
    scanf("%lf",&first);
    printf("Enter second number\n");
    scanf("%lf",&second);
    switch(op)
    {
        case'+':
            printf("%.1lf + %.1lf = %.1lf",first,second,first+second);
        break; 
        case'-':
            printf("%.1lf - %.1lf = %.1lf",first,second,first-second);
        break;
        case'*':
            printf("%.1lf * %.1lf = %.1lf",first,second,first*second);
        break;  
        case'/':
            if(second !=0){            //it means if second number is not equal to zero
                printf("%.1lf / %.1lf = %.1lf",first,second,first/second);
            }
            else{
                printf("division by zero is not allowed");
            }
        break;
        case'%':
            if((int)second !=0){            //use integers for modulus operator
                printf("%d %% %d = %d",(int)first,(int)second,(int)first % (int)second);
            }
            else{
                printf("modulus by zero is not allowed");
            }
        break;
        default:
            printf("ERROR!");
    }
    return 0;
}