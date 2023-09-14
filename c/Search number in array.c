
#include<stdio.h>

int main()
{
    int array[6]={20,40,16,17,5,69};
    int i, num, loc, flag=1;
    printf("\n elements of Array are :\n");
    
    for(i=0;i<6;i++);
    {
        printf("%d ",array[i]);
       
    }  
    printf("\n enter elements to search :");
    scanf("%d",&num);
    for(i=0;i<6;i++)
    {
        if(array[i]=num)
        {
            printf("\n Number found");
            flag=0;
            loc=1;
        }
    }
    if(flag=0)
    {
        printf("\n number found at location :%d",loc+1);
    }
    else
    {
        printf("number not found");
    }
    return 1;
    
    
}