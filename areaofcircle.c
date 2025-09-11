/*
Program:area of circle
Author:Tushar
*/
#include<stdio.h>
void main()
{
  int Radius;
  float Area;
  printf("Enter Radius of Circle: ");
  scanf("%d",&Radius);

  Area= 3.14*Radius*Radius;
  printf("The area of circle is %.2f\n",Area);

}
