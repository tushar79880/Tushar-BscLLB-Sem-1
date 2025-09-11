/*
Program:Whether a year is Leap or Not
Author:Tushar
*/
#include<stdio.h>
void main()
{
  int Year;
  printf("Enter a Year\n");
  scanf("%d",&Year);

  if((Year%400==0)||(Year%4==0 && Year%100!=0))
  {
      printf("%d is a leap Year.\n",Year);
  }
  else
  {
       printf("%d is not a leap Year.\n",Year);
  }

}
