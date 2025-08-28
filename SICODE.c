#include<stdio.h>
void main ()
{
    int p , r , t;
    float SI;
    printf("enter the value of principal , rate and time");
    scanf("%d%d%d",&p , &r , &t);
    SI = (p*r*t)/100;
    printf("simple interest = %f", SI);
    return 0;


}
