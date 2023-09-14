#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main(void)
{
  int n, cube;
  char ch;
  
  do
  {
  printf("Enter a number :");
  scanf("%d",&n);
  cube =n*n*n;
  printf("\nThe value of cube is %d",cube);
  printf("\nDo you wish to continue ?\nPlease type y or n\n");
  scanf("%s",&ch);
  }
  
  while(ch=='y');
  
  getch();
}
