#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=10;i++)
    {
        int r=n*i;
        printf("%d\n",r);
    }
    return 0;
}
