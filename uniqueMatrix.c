#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c;
    int matrix[50][50];
    int check_flag = 0;
    printf("Enter number of rows and column: ");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    return 0;
}
