
/*
#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

void main()
{
  int k=0, i,j,rows;
  
  printf("Enter a number to define the result ");
  scanf("%d",&rows);
  
  for(i=1;i<=rows;i++) // print spaces
  {
    for(j=1;j<=rows-i;j++)
    {
    printf(" ");
    }
    
    for(k=1;k<=(2*i-1);k++)
    {
     printf("*");
    }
    
    printf("\n");
  }
}
*/
  
  
  

#include <stdio.h>

int main()
{
    int i, j, n;

    // Input number of rows from user 
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        // Print i number of stars 
        for(j=1; j<=i; j++)
        {
            printf("%d",j /*Or star*/);
        }

        //Move to next line
        printf("\n");
    }

    return 0;
}