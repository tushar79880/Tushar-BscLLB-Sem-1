#include<stdio.h>
void main ()
{
    int x;
    printf("Enter the value of x");
    scanf("%d", &x);
    if ((x%3==0)&&(x%5==0))
    {
        printf("%d is divisible by both 3 and 5");
    }
    else
    {
        printf("%d is not divisible by both 3 and 5");
    }
}
