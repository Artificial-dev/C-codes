#include <stdio.h>
#include<conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int i , sum ,n;
  i=1;
  sum=0;
  
 printf("Enter range :");
 scanf("%d",&n);
  do
  {
    if(i%2!=0)
      sum =sum +i; //Only this line will me considered in if loop
      
      i = i +1;//This line is not part of if condition 
    
   }
  while(i<=n);
    printf("\nSum of odd number is %d",sum);
    
    
  
  return 0;
  
}