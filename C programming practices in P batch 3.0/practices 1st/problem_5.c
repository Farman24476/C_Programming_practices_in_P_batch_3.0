#include<stdio.h>
int main()
{
    int tk;
    printf("Enter your number: ");
    scanf("%d",&tk);
    if (tk>=10000)
    {
        printf("Gucci Bag\n");
        if(tk>20000)
        {
        printf("Gucci belt");
        }
        else if(tk>=5000)
        { 
            printf("Levices Bag");

        }
    }
    else {
     printf("Something");    
     }
    return 0;
}