#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    add(a,b);
    mult(a,b);
    div(a,b);
}
void add(int x, int y)
{
    int z;
    z = x+y;
    printf("\nSum= %d", z);
    return 0;
}
void mult(int x, int y)
{
    int z;
    z = x*y;
    printf("\nMultiplication= %d", z);
    return 0;
}
void div(int x, int y)
{
    int z;
    z = x/y;
    printf("\nDivison= %d", z);
    return 0;
}
