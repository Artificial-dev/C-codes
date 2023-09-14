#include<stdio.h>

int main()
{
    int array[10], i, temp, j;
    printf("Enter elements of an array :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&array[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }     
    }
    printf("\nAcending order of array :");
    for(i=0;i<10;i++)
    {
        printf("\n%d",array[i]);
    }
    return 1;
}