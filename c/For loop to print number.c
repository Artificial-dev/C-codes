#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int x ,n ;
  printf("Print number from 1 to ");
  scanf("%d",&n);
  for(x=1;x<=n;x++)
  {
    printf("\n%d",x);
  }
  return 0;
}