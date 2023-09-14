#include<stdio.h>

int main()
{
    int origin_matrix[3][3], trans_matrix[3][3], i=0, j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Enter the matrix[%d][%d]");
            scanf("%d",&origin_matrix[i][j]);
           
            trans_matrix[j][i]=origin_matrix[i][j];
            
        }
    }
    printf("Orignal matrix is :\n\t");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", origin_matrix[i][j]]);
        }
        printf("\n");
    }
    printf("\n Transpose of matrix is :\n\t");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",trans_matrix[i][j]);
        }
        printf("\n\t");
    }
    return 1;
}