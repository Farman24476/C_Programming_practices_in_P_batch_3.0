#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if (num%2<=0)
    {
        printf("The number is even");
    }
    else{
        printf("The numver is odd");
    }
    return 0;
}