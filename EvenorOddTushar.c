#include<stdio.h>
void main ()
{
    int n;
    printf("Enter the value of n");
    scanf ("%d",&n);
    if (n>0)
    {
        printf("n is Positive");
    }
    else if (n<0)
    {
        printf ("n is Negative");
    }
    else if (n==0)
    {
        printf("n is Zero");
    }
}
