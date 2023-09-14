#include<stdio.h>

int main()
{    
    int number [5];
    int i=0, cnt_pos=0, cnt_neg=0, cnt_zero=0;
    
    for(i=0;i<5;i++) //For loop for accepting the data
    {
        printf("Enter the number :");
        scanf("%d",&number[i]);
        if(number[i]>0)
        {
            cnt_pos++;
        }
        if(number[i]<0)
        {
            cnt_neg++;
        }
        if(number[i]==0)
        {
            cnt_zero++;
        }
    }
    printf("\nNumber of the (+ve) number =%d",cnt_pos);
    printf("\nNumber of the (-ve) number =%d",cnt_neg);
    printf("\nNumber of the (0) number =%d",cnt_zero);
    
    return 1;
}