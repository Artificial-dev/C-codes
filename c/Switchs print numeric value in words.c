#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int choice;
  printf("Enter any choice from 1 to 5 :");
  scanf("%d",&choice);
  switch (choice)
  {
    case 1: printf(" \n One ");
      break;
    case 2: printf("  Two");
      break;
    case 3: printf(" three ");
      break;
    case 4: printf(" four");
      break;
    case 5: printf(" \n five");
      break;
    
    default:printf("\n invalid");
  }
  
  return 0;
}
