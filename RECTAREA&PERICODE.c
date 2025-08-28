#include<stdio.h>
void main ()
{
    int l,b;
    int area , perimeter;
    printf("enter the value of length");
    scanf("%d",&l);
    printf("enter the value of breadth");
    scanf("%d",&b);
    area = l*b;
    printf("area of rectangle: %d\n", area);
    perimeter = 2*(l+b);
    printf("perimeter of rectangle: %d\n", perimeter);


}
