#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  int n1, n2 ,n3 ;
 
  printf("enter any there number");
  scanf("%d %d %d",&n1 ,&n2, &n3);
  
  
  if(n1>n2)
  {
    if(n1>n3)
    {
      printf(" greater number is %d",n1);
    }
    else
    {
      printf("greatest is %d",n3);
    }
  }
  else
  {
    if(n2>n3)
    {
      printf("greatest is %d",n2);
    }
    else
    {
      printf("gretest1 is %d",n3);
    }
  }
  
  
  return 0;
}