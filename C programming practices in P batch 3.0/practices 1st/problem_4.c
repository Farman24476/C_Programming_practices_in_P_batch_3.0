#include<stdio.h>
int main()
{
    double num;
    printf("Enter your number: ");
    scanf("%lf",&num);
    if (num>0.0)
    {
        printf("The number is postive");
    }
    else if(num<0.0){
        printf("The numver is negative");
    }
    else
    {
        printf("The number is Zero");
    }
    return 0;
}