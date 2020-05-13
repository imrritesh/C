#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,a[100],b[100],i,j,n,c=0;
    printf("Enter the first and second number: ");
    scanf("%d%d",&x,&y);
    printf("How many common multiple you want to find? ");
    scanf("%d", &n);
    for(i=1;i<20;i++)
    {
        a[i]= x*i;
        b[i]= y*i;
    }

    printf("Multiple of %d & %d is: ", x, y);
    printf("\nx: ");
    for(i=1;i<20;i++)
    {
        printf("%d, ", a[i]);

    }
    printf("\ny: ");
    for(i=1;i<20;i++)
    {
        printf("%d, ", b[i]);

    }

    printf("\n\nCommon multiples are: ");
    for(i=1;i<20;i++)
    {
        for(j=1;j<20;j++)
        {
        if(a[i]==b[j])
        {
            c++;
            printf("%d ", a[i]);
        }
        if(c==n)
        {
            exit(1);
        }
        }
    }

 return 0;
}
