#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int swap1, swap2, swap3 ;
  printf("Enter value to swap");
  scanf("%d %d", &swap1, &swap2);
  
  /* swap3 = swap2 ;
     swap1 = swap2 ;
     swap2 = swap3 ;
  
  */
 // 11       5   +   6
  swap1 = swap1 + swap2 ;
  
  //5       11   -   6
  swap2 = swap1 - swap2 ;
  
  // 6     11   -   5
  swap1 = swap1 - swap2 ;
 
  printf("The swap value is %d %d", swap1,swap2);
  
  
  return 0;
}