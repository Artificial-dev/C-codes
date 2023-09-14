#include<stdio.h>

int main()
{   
    int array[5]={29,9,6,9,5},i;
    printf("\n Elements of array :\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    int min=array[0];
    for(i=1;i<5;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("\nSmallest number in 5 elements array is%d",min);
    return 1;
}