/*
Program:Switch statement
Author:Tushar
*/
#include<stdio.h>
void main()
{
  int choice;
  printf("Enter a number between 1 to 7\n");
  scanf("%d",&choice);

  switch(choice)
  {
      case 1: printf("Monday");
              break;
              case 2: printf("Tuesday");
                      break;
                      case 3: printf("Wednesday");
                              break;
                              case 4: printf("Thursday");
                                      break;
                                      case 5: printf("Friday");
                                              break;
                                              case 6: printf("Saturday");
                                                      break;
                                                      case 7: printf("Sunday");
                                                              break;
                                                              default: printf("Wrong Choice");
  }

}
