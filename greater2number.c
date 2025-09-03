#include<stdio.h>
void main ()
{
    float celcius , fahrenheit;
    printf("Enter temperature in Celcius");
    scanf ("%f",&celcius , &fahrenheit);
    fahrenheit = (celcius*9/5)+32;
    printf("Temperature in Fahrenheit:%.2f\n" , fahrenheit);
}
