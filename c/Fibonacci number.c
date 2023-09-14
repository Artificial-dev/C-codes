#include <stdio.h>
#include<conio.h>
//Compiler version gcc  6.3.0
void main()
{
  int a,b,c,i,n;
  a = 1;
  b = 2;
  i = 1;
  printf("1 \n2\n");
  do
  {
    c= a +b;
    printf("%d\n",c);
    a=b;
    b=c;
    i=i+1;
   
  }
   while(i<97);
  
  return 0;
}