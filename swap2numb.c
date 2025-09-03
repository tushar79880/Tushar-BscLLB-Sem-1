#include<stdio.h>
void main ()
{
    int age;
    printf("Enter your Age");
    scanf("%d", &age);
    if (age<0)
    {
        printf("Invalid age entered");
    }
    else if (age<18)
    {
        printf("You are not eligible");
    }
    else if (age>=18)
    {
        printf("Congrats! You are eligible");
    }
}
