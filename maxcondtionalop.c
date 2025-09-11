/*
Program:Maximum number using conditional operator
Author:Tushar
*/
#include<stdio.h>
void main()
{
  int a,b,max;
  printf("Enter the value of two numbers: ");
  scanf("%d %d",&a , &b);

  max= (a>b)? a : b;
  printf("The maximum number is %d\n",max);

}
