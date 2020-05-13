#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix1[10][10], matrix2[10][10], mul[10][10], row1, col1, row2, col2, i, j, k, sum=0;
    printf("Enter the number of row and column of 1st matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("\nEnter the elements of first matrix: ");
    for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

    printf("Enter the number of row and column of 2nd matrix: ");
    scanf("%d %d", &row2, &col2);

    if(col1!=row2)
        printf("\nMatrix multiplication not possible  ");
    else
    {
    printf("\nEnter the elements of Second matrix: ");
    for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }
    }
    printf("First Matrix: \n");
    for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                printf("%d\t", matrix1[i][j]);
                printf("\n");
            }
        }
    printf("Second Matrix: \n");
    for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%d\t", matrix2[i][j]);
                printf("\n");
            }
        }

        for(i=0;i<row1;i++)
        {
            for(j=0;j<row2;j++)
            {
                for(k=0;k<col2;k++)
                {
                    sum = sum + matrix1[i][k]*matrix2[k][j];

                }
                mul[i][j]=sum;
                sum = 0;
            }
        }
    printf("Product of matrices: \n");
     for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d\t", mul[i][j]);
                printf("\n");
            }
        }
        return 0;
}
