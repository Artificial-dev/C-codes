#include<stdio.h>


int main()
{   int i, array[20], pos, n;

    printf(" Enter number of elements of array:");
    scanf("%d",&n);
    printf("\n Enter elements no ",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("\n enter the position is elements to be deleted :");
    scanf("%d",&pos);
    
    if(pos>=n+1)
    {
        printf("\n deletion not possible");
    }
    else
    {
        for(i=pos-i;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
        printf("\n After deletion of elements at %d Loactaion The array is :\n",pos);
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",array[i]); 
    }
return 1;
}