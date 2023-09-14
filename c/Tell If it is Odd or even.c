#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num;
  printf("ENTER A NUMBER :");
  scanf("%d\n",&num);
  
  //scanf("%d",num);
  
  if(num%2==0)
  {
    printf("%d is Even Number",num);
  }
  else
  {
    printf("%d is Odd Number",num);
  }
  return 0;
}