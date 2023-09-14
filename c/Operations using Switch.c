#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int choice , n1 ,n2 , result;
  printf("******MENU******\n 1.Addtion\n 2.Subtraction\n 3.Multiplication\n 4.Division\n\n Enter Choice number");\
  // printf("Enter choice number");
   scanf("%d",&choice);
  if(choice<=4 && choice>=1)
  {
    printf("Enter two number :");
    scanf("%d %d",&n1 ,&n2);
  }
  
  switch(choice)
       {
         case 1:result= n1+n2;
                printf("The total value is %d",result);
                break;
         case 2:result= n1-n2;
                printf("The total value is %d",result);
                break;
         case 3:result= n1*n2;
                printf("The total value is %d",result);
                break;
         case 4:
          if(n2!=0)
         {
           result= n1/n2;
           printf("The total value is %d",result);
         }      
         else
         {
           printf("Can't divide by zero");
         }
                break;
         
         default:printf("Invaild Choice ");
       }
  
  
 
  return 0;
}