#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main() 
{ 
  int Hindi, Marathi, English ,total, average ;
  
  printf("enter marks of Marathi and Hindi and English");
  scanf("%d %d %d",&Hindi, &Marathi, &English);  
  
  total = Hindi+ Marathi+ English ;
  average = total/3 ;
  
  if(average >= 40)
  {
    printf("pass");
  }
  else
  {
    printf("fail");
  }
  return 0;
}